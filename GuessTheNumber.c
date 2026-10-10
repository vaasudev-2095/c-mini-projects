#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int random,guess;
    srand(time(NULL));
    random = rand() % 100 + 1;
    int noOfGuesses = 0;
    printf("Guess a number between (1 to 100) : ");
    do
    {
        scanf("%d",&guess);
        noOfGuesses++;
        if(guess<random)
        {
            printf("Enter a bigger no. : ");
        }
        else if(guess>random)
        {
            printf("Enter a smaller no. : ");
        }
        else
        {
            printf("Congratulations you have guessed the correct no. in %d attempts.",noOfGuesses);
        }
    }while(guess!=random);
}
