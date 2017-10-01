#define BOOST_DATE_TIME_NO_LIB

#include "IPCThread.h"
#include <boost/interprocess/ipc/message_queue.hpp>
#include <iostream>
#include <vector>

using namespace boost::interprocess;

IPCThread::IPCThread(void) 
{
}

IPCThread::~IPCThread(void)
{
}

void IPCThread::run()
{
	while(true)
	{
		try
		{
			message_queue mq(open_only ,"message_queue");

			unsigned int priority;
			message_queue::size_type recvd_size;

			for(int i = 0; i < 100; ++i)
			{
				int number;
				int siz = sizeof(number);
				mq.receive(&number, sizeof(number), recvd_size, priority);
				if(number != i || recvd_size != sizeof(number))
				{
					return;
				}
				else
				{
					emit dataSent(number);
				}
			}
		}
		catch(interprocess_exception &ex)
		{
			std::cout << ex.what() << std::endl;
		}
	}
   message_queue::remove("message_queue");
}