//
//  main.c
//  tictactoe challenge
//
//  Created by Harsha K N Bandara on 2023-12-15.
//

#include <stdio.h>
#include <stdlib.h>
#include <curses.h>

char square[10] = {'0','1','2','3','4','5','6','7','8','9'};
int choice, player;

int checkForWin ();
void displayBoard();
void markBoard(char mark);

int main() {
    int gameStatus,i=0;;
    char mark;
    
    player = 1;
    do{
        displayBoard();
        
        //change turns
        player =(player%2)? 1:2;
        
        
        //get input
        printf("player %d,input number:",player);
        scanf("%d",&choice);
        
        //set the character based on player turn
        mark = (player == 1)? 'x':'o';
        
        //set board based on user choice or Invalid choice
        markBoard(mark);
        
        gameStatus =checkForWin();
        player++;
       
    }while(i==-1);
    return 0;
}
/*********************************************************************
 Function to return game status
 1 for game is over with result
 0 for game is over and no result
 -1 game is in progress
 ******************************/

int checkForWin()
{
    int returnValue = 0;
    
    if (square[1] == square[2] && square[2] == square[3]) {
        returnValue = 1;
    }
    else if (square[4] == square[5] && square[5] == square[6]) {
        returnValue = 1;}
    else if(square[7] == square[8] && square[8] == square[9]) {
        returnValue = 1;}
    
    else if(square[1] == square[4] && square[4] == square[7]) {
        returnValue = 1;
    }
    else if(square[2] == square[5] && square[5] == square[8]) {
        returnValue = 1;}
    
    else if(square[3] == square[5] && square[5] == square[7]) {
        returnValue = 1;
    }
    else if(square[1] != '1' && square[2] != '2'&& square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8]!= '8' && square[9]!='9') {
        returnValue = 0;}
    else
        returnValue = -1;
    return returnValue;
    
}

//function to draw board ofvtic tac toe
void displayBoard()
{
    system("cls");
    
    printf("\n\n\tTic Tac Toe\n\n");
    
    printf("Player 1(x) - Player(0)\n\n\n");
    
    printf("    |      |       \n");
    printf("  %c|     %c|     %c\n",square[1],square[2],square[3]);
    
    printf("____|______|______\n");
    printf("    |      |");
    
    printf("    %c|     %c|     %c\n",square[4],square[5],square[6]);
    
    printf("____|______|______\n");
    printf("    |      |");
    
    printf("    %c|     %c|     %c\n",square[7],square[8],square[9]);
    
    printf("____|______|______\n");
    printf("    |      |");
}

void markBoard(char mark)
{
    if (choice == 1 && square[1] == '1')
        square[1] = mark;
    else if (choice == 2 && square[2] != '2') {
        square[2] = mark;
    }
    else if (choice == 3 && square[3] != '3') {
        square[3] = mark;
    }
    else if (choice == 4 && square[4] != '4') {
        square[4] = mark;
    }
    else if (choice == 5 && square[5] != '5') {
        square[5] = mark;
    }
    else if (choice == 6 && square[6] != '6') {
        square[6] = mark;
    }
    else if (choice == 7 && square[7] != '7') {
        square[7] = mark;
    }
    else if (choice == 8 && square[8] != '8') {
        square[8] = mark;
    }
    else if (choice == 9 && square[9] != '9') {
        square[9] = mark;
    }
    else
        printf("Invalid move");
    
    player--;
    getch();
}

