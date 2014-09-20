#include <QApplication>
#include "mainwindow.h"

int main(int argc, char** argv){
//	Q_INIT_RESOURCE(application);
	QApplication app(argc, argv);
	app.setOrganizationName("QtProject");
	app.setApplicationName("Yet Another Go Client");
	MainWindow win;
	win.show();
	return app.exec();
}
