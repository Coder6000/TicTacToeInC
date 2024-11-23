#include <stdio.h>

void printBoard();
void checkWinner();
void playerOneTurn();
void playerTwoTurn();
void game();
void addSymbol(int row, int column, char symbol);

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

int endGame = 0;

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

    while(endGame == 0){
        if(isPlayerOneTurn == 1 && isPlayerTwoTurn == 0){
            if(endGame == 1) break;
            do
            {
                
                playerOneTurn();
                if(isInputValid == 0) break;
            } while (isInputValid == 1);

            checkWinner();
            isPlayerOneTurn = 0;
            isPlayerTwoTurn = 1;
        }

        if (isPlayerOneTurn == 0 && isPlayerTwoTurn == 1){
            if(endGame == 1) break;
            do
            {
                
                playerTwoTurn();
                if (isInputValid == 0) break;
            } while (isInputValid == 1);
            
            checkWinner();
            isPlayerTwoTurn = 0;
            isPlayerOneTurn = 1;
        }

    }
    
}

void playerOneTurn(){
    printf("------------------------------------------------------\n");
    printBoard();
    printf("Which field would you like to take Player One?: ");
    scanf("%d", &userInput);
    printf("\n");

    switch(userInput){
        case 0:
            endGame = 1;
        break;

        case 1:
            addSymbol(0, 0, playerOneSymbol);
        break;
        
        case 2:
            addSymbol(0, 1, playerOneSymbol);
        break;

        case 3:
            addSymbol(0, 2, playerOneSymbol);
        break;

        case 4:
            addSymbol(1, 0, playerOneSymbol);
        break;

        case 5:
            addSymbol(1, 1, playerOneSymbol);
        break;

        case 6:
            addSymbol(1, 2, playerOneSymbol);
        break;

        case 7:
            addSymbol(2, 0, playerOneSymbol);
        break;

        case 8:
            addSymbol(2, 1, playerOneSymbol);
        break;

        case 9:
            addSymbol(2, 2, playerOneSymbol);
        break;
    }
}

void playerTwoTurn(){
    printf("------------------------------------------------------\n");
    printBoard();
    printf("Which field would you like to take Player Two?: ");
    scanf("%d", &userInput);
    printf("\n");

    switch(userInput){
        case 0:
            endGame = 0;
        break;

        case 1:
            addSymbol(0, 0, playerTwoSymbol);
        break;
        
        case 2:
            addSymbol(0, 1, playerTwoSymbol);
        break;

        case 3:
            addSymbol(0, 2, playerTwoSymbol);
        break;

        case 4:
            addSymbol(1, 0, playerTwoSymbol);
        break;

        case 5:
            addSymbol(1, 1, playerTwoSymbol);
        break;

        case 6:
            addSymbol(1, 2, playerTwoSymbol);
        break;

        case 7:
            addSymbol(2, 0, playerTwoSymbol);
        break;

        case 8:
            addSymbol(2, 1, playerTwoSymbol);
        break;

        case 9:
            addSymbol(2, 2, playerTwoSymbol);
        break;
    }
}

void checkWinner(){

    //PLAYER X

    //ROWS
    if(grid[0][0] == playerOneSymbol && grid[0][1] == playerOneSymbol && grid[0][2] == playerOneSymbol) { printf("PLAYER ONE WON!\n"); endGame = 1; }
    else if(grid[1][0] == playerOneSymbol && grid[1][1] == playerOneSymbol && grid[1][2] == playerOneSymbol) { printf("PLAYER ONE WON!\n"); endGame = 1; }
    else if(grid[2][0] == playerOneSymbol && grid[2][1] == playerOneSymbol && grid[2][2] == playerOneSymbol) { printf("PLAYER ONE WON!\n"); endGame = 1; }

    //COLUMNS
    else if(grid[0][0] == playerOneSymbol && grid[1][0] == playerOneSymbol && grid[2][0] == playerOneSymbol) { printf("PLAYER ONE WON!\n"); endGame = 1; }
    else if(grid[0][1] == playerOneSymbol && grid[1][1] == playerOneSymbol && grid[2][1] == playerOneSymbol) { printf("PLAYER ONE WON!\n"); endGame = 1; }
    else if(grid[0][2] == playerOneSymbol && grid[1][2] == playerOneSymbol && grid[2][2] == playerOneSymbol) { printf("PLAYER ONE WON!\n"); endGame = 1; }

    //DIAGONALS
    else if(grid[0][0] == playerOneSymbol && grid[1][1] == playerOneSymbol && grid[2][2] == playerOneSymbol) { printf("PLAYER ONE WON!\n"); endGame = 1; }
    else if(grid[0][2] == playerOneSymbol && grid[1][1] == playerOneSymbol && grid[2][0] == playerOneSymbol) { printf("PLAYER ONE WON!\n"); endGame = 1; }

    //PLAYER Y

    //ROWS
    else if(grid[0][0] == playerTwoSymbol && grid[0][1] == playerTwoSymbol && grid[0][2] == playerTwoSymbol) { printf("PLAYER TWO WON!\n"); endGame = 1; }
    else if(grid[1][0] == playerTwoSymbol && grid[1][1] == playerTwoSymbol && grid[1][2] == playerTwoSymbol) { printf("PLAYER TWO WON!\n"); endGame = 1; }
    else if(grid[2][0] == playerTwoSymbol && grid[2][1] == playerTwoSymbol && grid[2][2] == playerTwoSymbol) { printf("PLAYER TWO WON!\n"); endGame = 1; }

    //COLUMNS
    else if(grid[0][0] == playerTwoSymbol && grid[1][0] == playerTwoSymbol && grid[2][0] == playerTwoSymbol) { printf("PLAYER TWO WON!\n"); endGame = 1; }
    else if(grid[0][1] == playerTwoSymbol && grid[1][1] == playerTwoSymbol && grid[2][1] == playerTwoSymbol) { printf("PLAYER TWO WON!\n"); endGame = 1; }
    else if(grid[0][2] == playerTwoSymbol && grid[1][2] == playerTwoSymbol && grid[2][2] == playerTwoSymbol) { printf("PLAYER TWO WON!\n"); endGame = 1; }

    //DIAGONALS
    else if(grid[0][0] == playerTwoSymbol && grid[1][1] == playerTwoSymbol && grid[2][2] == playerTwoSymbol) { printf("PLAYER TWO WON!\n"); endGame = 1; }
    else if(grid[0][2] == playerTwoSymbol && grid[1][1] == playerTwoSymbol && grid[2][0] == playerTwoSymbol) { printf("PLAYER TWO WON!\n"); endGame = 1; }

}

void addSymbol(int row, int column, char symbol){
    if(grid[row][column] == playerOneSymbol || grid[row][column] == playerTwoSymbol) { isInputValid = 1; printf("WARNING: Spot occupied\n"); }

    else
    {
        isInputValid = 0;
        grid[row][column] = symbol;
    }
}