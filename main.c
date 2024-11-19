#include <stdio.h>

void printBoard();
void checkWinner();

int main(void){
    printBoard();
}


void printBoard(void){
    int grid[4][4];
    printf("|-----------|\n");
    for(int y = 1; y <= 3; y++){
        for(int x = 1; x <= 3; x++){
            grid[y][x] = x;
            printf("| %d ", grid[y][x]);
            if(x == 3){
                printf("|");
            }
        }
        printf("\n|-----------|\n");
    }
}

void checkWinner(){
    
}