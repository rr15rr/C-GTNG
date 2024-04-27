#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Libraries are included

//Main function for the program
int main() {
    
    int option;
    
    printf("\nWelcome to our Guess The Number Game!\n\n"
    "1) Play\n"
    "2) Instructions\n"
    "3) Exit\n\n"
    "Choose your option: "
    );

    scanf("%d", &option);


    //We create a switch case for the option menu
    switch (option) {
        case 1: //Case 1 for playing the game 

            int number;

            srand(time(NULL));

            int randomNumber = rand() % 10 + 1;


            printf("\n---Guess The Number---\n\n");
            printf("Choose a number from 1 to 10: ");

            scanf("%d", &number);


            //If conditional to confirm if the random number if the same as the number chosen by the user
            if (number == randomNumber) {
                printf("\nCongratulations, You guessed the number and won the game!\n\n");

            }  else {
                printf("\nIm sorry, that number is incorrect, you lost :(\n");
                printf("\nThe correct option was: %d", randomNumber);
                printf("\n\n");
            }

            break;

        case 2: //Case 2 for looking at the instructions of the game
            printf("\n---Instructions---\n\n");
            printf("In this game, your objective is to guess the number that the machine is thinking\n"
            "Choose a number from 1 to 10 to see if you were right!\n\n");
            break;

        case 3: //Case 3 for exiting the game
            printf("\nThanks for using our program, have a great day!\n\n");
            break;
    
    }

    //Return 0 to end the function
    return 0;
}