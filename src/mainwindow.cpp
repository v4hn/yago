#include "mainwindow.h"

MainWindow::MainWindow()
{}

void MainWindow::closeEvent(QCloseEvent* e){
	e->accept();
}
