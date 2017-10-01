#ifndef QT5PROC_H
#define QT5PROC_H

#include <QtWidgets/QMainWindow>
#include "ui_qt5proc.h"

class Qt5Proc : public QMainWindow
{
	Q_OBJECT

public:
	Qt5Proc(QWidget *parent = 0);
	~Qt5Proc();

private:
	Ui::Qt5ProcClass ui;
};

#endif // QT5PROC_H
