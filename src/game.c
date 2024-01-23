#include "game.h"

// show the menu
void showMenu()
{
    printf("\n\t************************\n");
    printf("\t* Play a Guessing Game *\n");
    printf("\t* (s) Start  (q) quit  *\n");
    printf("\t************************\n");
    printf("\n");
}

// show the rules of the game
void rulesGame()
{
    printf("\n\t**************************************************\n");
    printf("\t**    1. Guess a number between 1 and 20        **\n");
    printf("\t**    2. Guess the number correctly to win      **\n");
    printf("\t**    3. When you run out of attepts you lose   **\n");
    printf("\t**    4. For every wrong guess -1 is deducted   **\n");
    printf("\t**    3. For right guess +10 is added to score  **\n");
    printf("\t**************************************************\n");
}

// win message
void winMsg()
{
    printf("\n\t********************************\n");
    printf("\t**     You Won!!! Yay!!!      **\n");
    printf("\t********************************\n");
}

// lose message
void loseMsg()
{
    printf("\n\t********************************\n");
    printf("\t**     You Lost!!!            **\n");
    printf("\t********************************\n");
}