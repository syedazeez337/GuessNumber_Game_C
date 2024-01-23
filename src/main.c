#include "game.h"

int main(void)
{
    showMenu();

    char choice;
    int plays, wins, loses;
    int score = 10;
    
    printf("Enter : ");
    scanf(" %c", &choice);

    while(choice != 'q')
    {
        srand(time(NULL));
        int randNum = (rand() % MAXNUM) + 1;

        int guessNum;
        rulesGame();
        printf("Enter a number 1 to %d: ", MAXNUM);
        scanf("%d", &guessNum);

        // Eliminate the possiblity of wrong input
        if(guessNum > MAXNUM || guessNum < 1)
        {
            printf("Invalid Input...\n");
            continue;
        }

        for(int i = 1; i <= ATTEMPTS; ++i)
        {
            if(guessNum == randNum)
            {
                puts("Correct...");
                score += 10;
                winMsg();
                wins++;
                break;
            }
            else if(guessNum < randNum)
            {
                printf("Attempt --> %d", i);
                printf("\t\tLow... Guess Higher...\n");
                score--;
            }
            else if(guessNum > randNum)
            {
                printf("Attempt --> %d", i);
                printf("\t\tHigh... Guess Lower...\n");
            }
            else
            {
                printf("Dummy\n");
                break;
            }
            printf("Guess again: ");
            scanf("%d", &guessNum);
        }
        if(guessNum != randNum)
        {
            loseMsg();
            loses++;
        }
        showMenu();
        printf("Enter: ");
        scanf(" %c", &choice);
        plays++;
    }
    // Displaying Game statistics
    printf("Game Statistics\n");
    printf("Score     -> %d\n", score);
    printf("Plays     -> %d\n", plays);
    printf("Wins      -> %d\n", wins);
    printf("Loses     -> %d\n", loses);

}