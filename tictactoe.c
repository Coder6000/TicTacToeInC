#include <stdio.h>

void printBoard();
void checkWinner();

int main(void){
    printBoard();
    return 0;
}

void printBoard(void){
    int grid[4][4];

    printf("|-----------|\n");

    for(int i = 0; i <= 2; i++){
        for(int j = 0; j <= 2; j++){
            grid[i][j] = j;
            printf("| %d ", grid[i][j]);
            if(j == 2){
                printf("|");
            }
            
        }
        printf("\n|-----------|\n");
    }
}

void checkWinner(){
    int winCondition[3][3];

    //PLAYER X

    //ROWS
    if(winCondition[0][0] == "X" && winCondition[0][1] == "X" && winCondition[0][2] == "X"){}
    if(winCondition[1][0] == "X" && winCondition[1][1] == "X" && winCondition[1][2] == "X"){}
    if(winCondition[2][0] == "X" && winCondition[2][1] == "X" && winCondition[2][2] == "X"){}

    //COLUMNS
    if(winCondition[0][0] == "X" && winCondition[1][0] == "X" && winCondition[2][0] == "X"){}
    if(winCondition[0][1] == "X" && winCondition[1][1] == "X" && winCondition[2][1] == "X"){}
    if(winCondition[0][2] == "X" && winCondition[1][2] == "X" && winCondition[2][2] == "X"){}

    //DIAGONALS
    if(winCondition[0][0] == "X" && winCondition[1][1] == "X" && winCondition[2][2] == "X"){}
    if(winCondition[0][2] == "X" && winCondition[1][1] == "X" && winCondition[2][0] == "X"){}

    //PLAYER Y

    //ROWS
    if(winCondition[0][0] == "O" && winCondition[0][1] == "O" && winCondition[0][2] == "O"){}
    if(winCondition[1][0] == "O" && winCondition[1][1] == "O" && winCondition[1][2] == "O"){}
    if(winCondition[2][0] == "O" && winCondition[2][1] == "O" && winCondition[2][2] == "O"){}

    //COLUMNS
    if(winCondition[0][0] == "O" && winCondition[1][0] == "O" && winCondition[2][0] == "O"){}
    if(winCondition[0][1] == "O" && winCondition[1][1] == "O" && winCondition[2][1] == "O"){}
    if(winCondition[0][2] == "O" && winCondition[1][2] == "O" && winCondition[2][2] == "O"){}

    //DIAGONALS
    if(winCondition[0][0] == "O" && winCondition[1][1] == "O" && winCondition[2][2] == "O"){}
    if(winCondition[0][2] == "O" && winCondition[1][1] == "O" && winCondition[2][0] == "O"){}

}