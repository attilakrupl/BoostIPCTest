#include "qt4proc.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Qt4Proc w;
	w.show();
	return a.exec();
}
