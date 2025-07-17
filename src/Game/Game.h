#ifndef GAME_H
#define GAME_H

#include <raylib/raylib.h>

class Game {
public:
    struct WindowConfig {
        const int width = 1920;
        const int height = 1080;
        const char* name = "hiii meowwww meowwwww mrrrpppp";
    };

public:
    Game();
    ~Game();

    void InitialiseWindow();
    void OnWindowStart();
    void OnUpdate();
    void OnWindowClose();

    const int GetWindowWidth() { return m_windowConfig.width; }
    const int GetWindowHeight() { return m_windowConfig.height; }

private:
    WindowConfig m_windowConfig;
};

#endif // GAME_H