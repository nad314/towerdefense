#include <main>

void MainWindow::onOpening() {
    Form::onOpening();
    setSize(512, 512);
    setTitle("Towerdefense");
    allowResize(false);
}

void MainWindow::onOpened() {
    Form::onOpened();
}