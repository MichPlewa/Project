#include <raylib.h>
int main(){
    int width = 350;
    int height = 200;
    InitWindow(width, height, "My Window");
    while(true){
        BeginDrawing();
        ClearBackground(RED);
        EndDrawing();
    }
};