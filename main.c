
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
    //init
    const int screenWidth = 800;
    const int screenHeight = 640;
    InitWindow(screenWidth, screenHeight, "FishBro's Revenge");

    //Texture2D texPlayer = LoadTexture("resources/fishbrotest.png");
    Texture2D texLogo = LoadTexture("resources/titletest.png");

    Player player = {0}; //initializes Player struct with all vars set to 0

    int gamepad = 0; //dunno what it does actually but makes gamepad work lol
    GameScreen screen = TITLE; // sets the screen to title screen




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

                ClearBackground(PURPLE);

                // Calculate the position to draw the texture at the center of the screen
                int texWidth = texLogo.width;
                int texHeight = texLogo.height;
                int posX = (screenWidth - texWidth) / 2;
                int posY = (screenHeight - texHeight) / 2;

                DrawTexture(texLogo, posX, posY, WHITE);
            }



                break;

            case GAMEPLAY: {




            }
                break;

            case GAME_OVER: {


            } break;
            default: break;


        }

    }
    // End of Switch (screen)
    EndDrawing();
    //deinitialize
    //unload resources
    CloseWindow();
    return 0;
}