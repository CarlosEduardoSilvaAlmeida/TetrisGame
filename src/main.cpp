#include <raylib.h>

int main() 
{

    Color darkBlue = {44, 44, 127, 255};
    InitWindow(300, 600, "raylib Tetris");
    SetTargetFPS(60); // Define quantas vezes o loop principal roda por segundo
    while(WindowShouldClose() == false){ // verifica se ESC ou sair foi precionado

        BeginDrawing(); // Desenha uma tela branca
        ClearBackground(darkBlue);


        EndDrawing(); // Fecha a tela
    }

    CloseWindow();
}