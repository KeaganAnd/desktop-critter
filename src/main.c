/*******************************************************************************************

Desktop Critter

Omar, Keagan
02/18/2026

********************************************************************************************/

#include "../external/raylib.h"

// Program main entry point
int main(void)
{
    // Initialization
    const int screenWidth = 800;
    const int screenHeight = 800;

    SetConfigFlags(FLAG_WINDOW_TRANSPARENT); // Configures window to be transparent
    InitWindow(screenWidth, screenHeight, "Desktop Critter");
    SetWindowState(FLAG_WINDOW_UNDECORATED); // Hide border/titlebar; omit if you want them there.

    SetTargetFPS(60);
    

    // Load test cat image
    Image cat = LoadImage("../imgs/cat.png"); // Loads the cat image into memory

    Texture2D catTexture = LoadTextureFromImage(cat); // Creates texture from img

    UnloadImage(cat); // Can unload image now that texture is created

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update

        // Draw
        BeginDrawing();

            ClearBackground(BLANK);
            DrawTexture(catTexture, screenWidth/2 - catTexture.width/2, screenHeight/2 - catTexture.height/2 - 40, WHITE);

            DrawText("Desktop Critter", 10, 10, 20, WHITE);


        EndDrawing();
    }

    // De-Initialization
    CloseWindow();        // Close window and OpenGL context

    return 0;
}
