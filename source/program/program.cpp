#include <main>

int Towerdefense::onLoad() {
    return 0;
}

int Towerdefense::onDispose() {
    return 0;
}

int Towerdefense::onStart() {
    if (!wnd.open())
        return 1;
    return 0;
}

int Towerdefense::onStop() {
    wnd.close();
    return 0;
}

int Towerdefense::main() {
    bool done = 0;
    while (!done) {
        wnd.peekMessageAsync(done);
    }
    return 0;
}
