#include <raylib.h>
#include "grid.h"

int main() 
{

    Color darkBlue = {44, 44, 127, 255};
    InitWindow(300, 600, "raylib Tetris");
    SetTargetFPS(60); // Define quantas vezes o loop principal roda por segundo

    Grid grid = Grid();
    grid.grid[0][0] = 1;
    grid.grid[3][5] = 4;
    grid.grid[17][8] = 7;
    grid.Print();

    while(WindowShouldClose() == false){ // verifica se ESC ou sair foi precionado

        BeginDrawing(); // Desenha uma tela branca
        ClearBackground(darkBlue);
        grid.Draw();


        EndDrawing(); // Fecha a tela
    }

    CloseWindow();
}