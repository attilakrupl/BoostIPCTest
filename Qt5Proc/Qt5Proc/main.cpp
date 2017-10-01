#include "qt5proc.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Qt5Proc w;
	w.show();
	return a.exec();
}
