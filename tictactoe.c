#include <stdio.h>

void printBoard();
void checkWinner();
void playerOneTurn();
void playerTwoTurn();
void game();

char grid[4][4] = {
{'1', '2', '3'}, 
{'4', '5', '6'}, 
{'7', '8', '9'}  
};

char playerOneSymbol = 'X';
char playerTwoSymbol = 'O';

int isPlayerOneTurn = 1;
int isPlayerTwoTurn = 0;

int isInputValid = 0;

int userInput;

int endGame = 1;

int main(void){
    game();
    return 0;
}

void printBoard(void){
    printf("HINT: Type 0 to exit\n\n");

    printf("|-----------|\n");

    for(int i = 0; i <= 2; i++){
        for(int j = 0; j <= 2; j++){
            printf("| %c ", grid[i][j]);
            if(j == 2){
                printf("|");
            }
            
        }
        printf("\n|-----------|\n");
    }
    printf("\n");
}

void game(){

    while(endGame == 1){
        if(isPlayerOneTurn == 1 && isPlayerTwoTurn == 0){
            playerOneTurn();
            isPlayerOneTurn = 0;
            isPlayerTwoTurn = 1;
        }

        if (isPlayerOneTurn == 0 && isPlayerTwoTurn == 1){
            playerTwoTurn();
            isPlayerTwoTurn = 0;
            isPlayerOneTurn = 1;
        }

    }
    
}

void playerOneTurn(){
    printBoard();
    printf("Which field would you like to take Player One?: ");
    scanf("%d", &userInput);

    switch(userInput){
        case 0:
            endGame = 0;
        break;

        case 1:
            grid[0][0] = playerOneSymbol;
        break;
        
        case 2:
            grid[0][1] = playerOneSymbol;
        break;

        case 3:
            grid[0][2] = playerOneSymbol;
        break;

        case 4:
            grid[1][0] = playerOneSymbol;
        break;

        case 5:
            grid[1][1] = playerOneSymbol;
        break;

        case 6:
            grid[1][2] = playerOneSymbol;
        break;

        case 7:
            grid[2][0] = playerOneSymbol;
        break;

        case 8:
            grid[2][1] = playerOneSymbol;
        break;

        case 9:
            grid[2][2] = playerOneSymbol;
        break;
    }
}

void playerTwoTurn(){
    printBoard();
    printf("Which field would you like to take Player Two?: ");
    scanf("%d", &userInput);

    switch(userInput){
        case 0:
            endGame = 0;
        break;

        case 1:
            grid[0][0] = playerTwoSymbol;
        break;
        
        case 2:
            grid[0][1] = playerTwoSymbol;
        break;

        case 3:
            grid[0][2] = playerTwoSymbol;
        break;

        case 4:
            grid[1][0] = playerTwoSymbol;
        break;

        case 5:
            grid[1][1] = playerTwoSymbol;
        break;

        case 6:
            grid[1][2] = playerTwoSymbol;
        break;

        case 7:
            grid[2][0] = playerTwoSymbol;
        break;

        case 8:
            grid[2][1] = playerTwoSymbol;
        break;

        case 9:
            grid[2][2] = playerTwoSymbol;
        break;
    }
}

void checkWinner(){
    char winCondition[3][3];

    //PLAYER X

    //ROWS
    if(winCondition[0][0] == playerOneSymbol && winCondition[0][1] == playerOneSymbol && winCondition[0][2] == playerOneSymbol) {}
    if(winCondition[1][0] == playerOneSymbol && winCondition[1][1] == playerOneSymbol && winCondition[1][2] == playerOneSymbol) {}
    if(winCondition[2][0] == playerOneSymbol && winCondition[2][1] == playerOneSymbol && winCondition[2][2] == playerOneSymbol) {}

    //COLUMNS
    if(winCondition[0][0] == playerOneSymbol && winCondition[1][0] == playerOneSymbol && winCondition[2][0] == playerOneSymbol) {}
    if(winCondition[0][1] == playerOneSymbol && winCondition[1][1] == playerOneSymbol && winCondition[2][1] == playerOneSymbol) {}
    if(winCondition[0][2] == playerOneSymbol && winCondition[1][2] == playerOneSymbol && winCondition[2][2] == playerOneSymbol) {}

    //DIAGONALS
    if(winCondition[0][0] == playerOneSymbol && winCondition[1][1] == playerOneSymbol && winCondition[2][2] == playerOneSymbol) {}
    if(winCondition[0][2] == playerOneSymbol && winCondition[1][1] == playerOneSymbol && winCondition[2][0] == playerOneSymbol) {}

    //PLAYER Y

    //ROWS
    if(winCondition[0][0] == playerTwoSymbol && winCondition[0][1] == playerTwoSymbol && winCondition[0][2] == playerTwoSymbol) {}
    if(winCondition[1][0] == playerTwoSymbol && winCondition[1][1] == playerTwoSymbol && winCondition[1][2] == playerTwoSymbol) {}
    if(winCondition[2][0] == playerTwoSymbol && winCondition[2][1] == playerTwoSymbol && winCondition[2][2] == playerTwoSymbol) {}

    //COLUMNS
    if(winCondition[0][0] == playerTwoSymbol && winCondition[1][0] == playerTwoSymbol && winCondition[2][0] == playerTwoSymbol) {}
    if(winCondition[0][1] == playerTwoSymbol && winCondition[1][1] == playerTwoSymbol && winCondition[2][1] == playerTwoSymbol) {}
    if(winCondition[0][2] == playerTwoSymbol && winCondition[1][2] == playerTwoSymbol && winCondition[2][2] == playerTwoSymbol) {}

    //DIAGONALS
    if(winCondition[0][0] == playerTwoSymbol && winCondition[1][1] == playerTwoSymbol && winCondition[2][2] == playerTwoSymbol) {}
    if(winCondition[0][2] == playerTwoSymbol && winCondition[1][1] == playerTwoSymbol && winCondition[2][0] == playerTwoSymbol) {}

}

void checkIfValid(){
    if(grid[0][0] == playerOneSymbol || grid[0][0] == playerTwoSymbol) {}
    if(grid[0][1] == playerOneSymbol || grid[0][1] == playerTwoSymbol) {}
    if(grid[0][2] == playerOneSymbol || grid[0][2] == playerTwoSymbol) {}

    if(grid[1][0] == playerOneSymbol || grid[1][0] == playerTwoSymbol) {}
    if(grid[1][1] == playerOneSymbol || grid[1][1] == playerTwoSymbol) {}
    if(grid[1][2] == playerOneSymbol || grid[1][2] == playerTwoSymbol) {}

    if(grid[2][0] == playerOneSymbol || grid[2][0] == playerTwoSymbol) {}
    if(grid[2][1] == playerOneSymbol || grid[2][1] == playerTwoSymbol) {}
    if(grid[2][2] == playerOneSymbol || grid[2][2] == playerTwoSymbol) {}

    else
    {
        
    }
}