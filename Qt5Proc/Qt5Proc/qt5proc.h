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

public slots:
	void on_pushButton_clicked();
};

#endif // QT5PROC_H
