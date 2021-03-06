#include <main>

void MainWindow::onOpening() {
    Form::onOpening();
    setSize(800, 600);
    setTitle("Towerdefense");
    //allowResize(false);
}

void MainWindow::onOpened() {
    Form::onOpened();
    GL::createContext(*this);
    GL::init(*this);
}

void MainWindow::onClosing() {
    GL::deleteContext();
    Form::onClosing();
}

int MainWindow::onPaint(const core::eventInfo& e) {
    return 0;
}
