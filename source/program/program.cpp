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
    glExt::init();
    core::Debug::log("OpenGL version: %d\n", glExt::supportedVersion());
    return 0;
}

int Towerdefense::onStop() {
    wnd.close();
    return 0;
}

int Towerdefense::main() {
    bool done = 0;
    while (!done) {
        if (wnd.peekMessageAsync(done))
            continue;
        glClear(GL_COLOR_BUFFER_BIT);
        GL::swapBuffers(wnd);
        std::this_thread::sleep_for(std::chrono::microseconds(50));
    }
    return 0;
}
