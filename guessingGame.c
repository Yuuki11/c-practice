#include <stdio.h>
#include <stdlib.h>

/* int main()
{
    int secretNum = 7;
    int guess;
    int guessCount = 0;

    while (guess != secretNum)
    {
        printf("Enter a guess:");
        scanf("%d", &guess);
        if (guess == secretNum - 1 || guess == secretNum + 1)
        {
            printf("Close!!\n");
        }
        else if (guess > secretNum)
        {
            printf("Too high!\n");
        }
        else if (guess < secretNum)
        {
            printf("Too low!\n");
        }
        else
        {
            printf("You got it!\n");
        }
        guessCount++;
        if (guessCount == 3)
        {
            printf("Game over! The secret number was %d\n", secretNum);
            break;
        }
    }
} or */

int main()
{
    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int maxGuesses = 3;
    int gameOver = 0;

    while (guess != secretNum && gameOver == 0)
    {
        if (guessCount < maxGuesses)
        {

            printf("Enter a guess:");
            scanf("%d", &guess);
            if (guess == secretNum - 1 || guess == secretNum + 1)
            {
                printf("Close!!\n");
            }
            else if (guess > secretNum)
            {
                printf("Too high!\n");
            }
            else if (guess < secretNum)
            {
                printf("Too low!\n");
            }
            else
            {
                printf("You got it!\n");
            }
            guessCount++;
        }
        else
        {
            gameOver = 1;
        }

        if (gameOver == 1)
        {
            printf("Game over! The secret number was %d\n", secretNum);
            break;
        }
    }
}