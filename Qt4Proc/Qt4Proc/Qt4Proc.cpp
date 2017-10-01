#include "qt4proc.h"
#include "IPCThread.h"

Qt4Proc::Qt4Proc(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	
	IPCThread* m_pIPCThread = new IPCThread();

	bool bConnected = connect(dynamic_cast<QObject*>(m_pIPCThread), SIGNAL(dataSent(int)), this, SLOT(onDataSent(int)));
	m_pIPCThread->start();
}

Qt4Proc::~Qt4Proc()
{

}

void Qt4Proc::onDataSent(int number)
{
	ui.listWidget->addItem(QString::number(number));
}