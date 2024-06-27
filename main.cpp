#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// THIS IS A FUNCTION
int add(int a, int b) {
    return a + b;
}


int main() 
{
    srand(time(NULL));
    printf("Welcome to mastermind!\n");
    int masterMindNumber = rand() % 21;
    int guessedNumber;
    do  
    {
        printf("Please enter your masterMind number\n");
        scanf("%d", &guessedNumber);


        if (guessedNumber > masterMindNumber) {
            printf("Number too high!\n");
        } 
        if (guessedNumber < masterMindNumber){
            printf("Number too low!\n");
        }

    } while (guessedNumber != masterMindNumber);
        
        printf("Winner winner, chicken dinner!\n");
        
    return 0;
}

