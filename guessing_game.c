#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int random, guess;
    int no_of_guesses = 0;

    srand(time(NULL)); // Initialize random seed

    printf("Welcome to the world of Guessing Number\n");

    random = rand() % 100 + 1; // random number 1-100

    do { 
        printf("Please Enter Your Guess between (1 to 100): ");
        scanf("%d", &guess);
        no_of_guesses++;

        if (guess < random) {
            printf("Guess A Larger Number.\n");
        } 
        else if (guess > random) {
            printf("Guess A Smaller Number.\n");
        } 
        else {
            printf("Congratulations!! You Have Successfully Guessed The Number In %d Attempts\n", no_of_guesses);
        }

    } while (guess != random); 

    printf("Bye Bye, Thanks For Playing.\n");
    printf("Developed By: Himanshu Kumar\n");

    return 0;
}
