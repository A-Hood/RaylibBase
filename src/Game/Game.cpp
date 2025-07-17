#include "Game.h"

Game::Game() {
    InitialiseWindow();
};

Game::~Game() {
  
};

void Game::InitialiseWindow() {
    InitWindow(m_windowConfig.width, m_windowConfig.height, m_windowConfig.name);
    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second

    OnWindowStart();
}

void Game::OnWindowStart() {

}

void Game::OnUpdate() {
    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawText("Hi", this->GetWindowWidth() / 2, this->GetWindowHeight() / 2, 50, LIGHTGRAY);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }
}

void Game::OnWindowClose() {
    CloseWindow();
}