#include <ctime>
#include <string>

#include "raylib.h"
#include "Guide.h"


int side=0;
int main (void){
    const int screenWidth = 1200;
    const int screenHeight=600;
    InitWindow(screenWidth, screenHeight, "Dice roller");

Texture2D one = LoadTexture("1.png");
Texture2D two = LoadTexture("2.png");
Texture2D three = LoadTexture("3.png");
Texture2D four = LoadTexture("4.png");
Texture2D five = LoadTexture("5.png");
Texture2D six = LoadTexture("6.png");

    SetTargetFPS(60);

    Dice die(6);


    std::string message = "Enter space to roll the dice";

    while(!WindowShouldClose()){
        if (IsKeyPressed(KEY_SPACE)){
            side = die.roll();
            message = "rolled " + std::to_string(side) + ", roll again with space";
        }

        BeginDrawing();

        ClearBackground(BLUE);


        switch(side){

            case 1:
            DrawTexture(one, screenWidth/10, screenHeight/5, WHITE);
            break;
            case 2:
            DrawTexture(two, screenWidth/10, screenHeight/5, WHITE);
            break;
            case 3:
            DrawTexture(three, screenWidth/10, screenHeight/5, WHITE);
            break;
            case 4:
            DrawTexture(four, screenWidth/10, screenHeight/5, WHITE);
            break;
            case 5:
            DrawTexture(five, screenWidth/10, screenHeight/5, WHITE);
            break;
            case 6:
            DrawTexture(six, screenWidth/10, screenHeight/5, WHITE);
            break;
        }


        DrawText(message.c_str(), screenWidth/10, screenHeight/2, 40, WHITE);
        
        EndDrawing();
    }


}