
#include <raylib.h>

typedef enum GameScreen{ TITLE, GAMEPLAY, GAME_OVER } GameScreen;

typedef struct Player{
    Vector2 position;
    Vector2 speed;
    Vector2 size;
    Rectangle bounds;
    int health;
    int experience;
} Player;



int main(void) {
    const int screenWidth = 800;
    const int screenHeight = 640;
    InitWindow(screenWidth, screenHeight, "FishBro's Revenge");

    Player player = {0}; //initializes player with all vars set to 0

    int gamepad = 0; //dunno what it does actually but makes gamepad work lol
    GameScreen screen = TITLE; // sets the screen to totle screen
    while (!WindowShouldClose()) {
        switch (screen) {

            case TITLE: {

                if (IsGamepadButtonReleased(gamepad, GAMEPAD_BUTTON_MIDDLE_RIGHT)) {

                    screen = GAMEPLAY;
                }
            }
                break;
            case GAMEPLAY: {
                // Gameplay logic
            }
                break;

            case GAME_OVER: {
                //game over logic
            }
                break;
        }
        //updates stop

        //drawing starts
        BeginDrawing();

        ClearBackground(RAYWHITE);

        switch (screen) {

            case TITLE: {


            }
                break;

            case GAMEPLAY: {


            }
                break;

            case GAME_OVER: {


            }
                break;

            default:
                break;
        }
        // End of Switch (screen)
        EndDrawing();
    }
    //deinitialize
    //unload resources
    CloseWindow();
    return 0;
}