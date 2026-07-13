#include <stdio.h>

int main()
{
    int secret = 7;
    int guess;

    printf("Guess the number (1 to 10): ");
    scanf("%d", &guess);

    while(guess != secret)
    {
        printf("Wrong guess! Try again: ");
        scanf("%d", &guess);
    }

    printf("Congratulations! You guessed the correct number.\n");

    return 0;
}