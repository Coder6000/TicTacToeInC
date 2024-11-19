#include <stdio.h>

void printBoard();

int main(void){
    printBoard();
    return 0;
}

void printBoard(void){
    int grid[4][4];

    printf("|-----------|\n");

    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 3; j++){
            grid[i][j] = j;
            printf("| %d ", grid[i][j]);
            if(j == 3){
                printf("|");
            }
            
        }
        printf("\n|-----------|\n");
    }
}