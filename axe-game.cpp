#include <raylib.h>
int main(){
    int width = 350;
    int height = 200;
    int circleA = 175;
    int circleB = 100;

    InitWindow(width, height, "My Window");

    SetTargetFPS(60);

    while(!WindowShouldClose()){
        BeginDrawing();

        ClearBackground(WHITE);

        DrawCircle(circleA, circleB, 25, BLUE);

        if(IsKeyDown(KEY_D)){
            circleA += 10;
        };
        if(IsKeyDown(KEY_A)){
            circleA -= 10;
        };

        EndDrawing();
    }
};