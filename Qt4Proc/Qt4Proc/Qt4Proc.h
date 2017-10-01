#ifndef QT4PROC_H
#define QT4PROC_H

#include <QtGui/QMainWindow>
#include "ui_qt4proc.h"

class Qt4Proc : public QMainWindow
{
	Q_OBJECT

public:
	Qt4Proc(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Qt4Proc();

private:
	Ui::Qt4ProcClass ui;
};

#endif // QT4PROC_H
