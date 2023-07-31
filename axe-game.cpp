#include <raylib.h>
int main(){
    int width = 850;
    int height = 450;

    int circle_x = 175;
    int circle_y = 100;

    int axe_x = 300;
    int axe_y = 0;

    InitWindow(width, height, "My Window");

    SetTargetFPS(60);

    while(!WindowShouldClose()){
        BeginDrawing();

        ClearBackground(WHITE);

        DrawCircle(circle_x, circle_y, 25, BLUE);
        DrawRectangle(axe_x, axe_y, 50, 50, RED);

        axe_y += 10;

        if(IsKeyDown(KEY_D) && circle_x < width){
            circle_x += 10;
        };
        if(IsKeyDown(KEY_A) && circle_x > 0){
            circle_x -= 10;
        };
        if(IsKeyDown(KEY_S) && circle_y < height){
            circle_y += 10;
        };
        if(IsKeyDown(KEY_W) && circle_y > 0){
            circle_y -= 10;
        };

        EndDrawing();
    }
};