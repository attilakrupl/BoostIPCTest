#ifndef IPC_THREAD_H
#define IPC_THREAD_H

#include <QtCore/QThread>

class IPCThread: public QThread
{
	Q_OBJECT
	
	void run();


public:
	IPCThread(void);
	~IPCThread(void);

signals:
	void dataSent(int);

		
};

#endif //IPC_THREAD_H