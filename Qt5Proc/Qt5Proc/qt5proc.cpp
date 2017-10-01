#define BOOST_DATE_TIME_NO_LIB

#include "qt5proc.h"
#include <boost/interprocess/ipc/message_queue.hpp>
#include <iostream>
#include <vector>

using namespace boost::interprocess;

Qt5Proc::Qt5Proc(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

Qt5Proc::~Qt5Proc()
{

}

void Qt5Proc::on_pushButton_clicked()
{
	try {
		//Erase previous message queue
		message_queue::remove("message_queue");

		//Create a message_queue.
		message_queue mq
		(create_only               //only create
			, "message_queue"           //name
			, 100                       //max message number
			, sizeof(int)               //max message size
		);

		//Send 100 numbers
		for (int i = 0; i < 100; ++i) {
			mq.send(&i, sizeof(i), 0);
		}
	}
	catch (interprocess_exception &ex) {
		std::cout << ex.what() << std::endl;
	}
}