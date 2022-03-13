//Ara Beigi
//Assignment_6
//This pprogram plays Rock Paper Scissors with the user.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef enum {Rock = 1, Paper, Scissors} play;

int main()
{
       	    srand(time(0));
            play rps;
	    int playerChoice;
            int choice;
            int playerScore = 0;
            int computerScore = 0;
            while (1) {
           printf("\t%d: Rock\n\t%d: Paper\n\t%d: Scissors\n\t0: Quit\n", Rock, Paper, Scissors);
            scanf("%d", &playerChoice);
            if (playerChoice == 0) {
                    printf("Final Results: Player %d, Computer %d\n", playerScore, computerScore);
                    break;
	    }
	    int computerChoice = rand() % 3 + 1;
            if (computerChoice == Rock) 
                    printf("Computer choice: Rock\n"); 
	    else if (computerChoice == Paper)
                    printf("Computer choice: Paper\n");
	    else
                    printf("Computer choice: Scissors\n"); 
            

	    if (playerChoice == Rock)
                    printf("Player choice: Rock\n");
            else if (playerChoice == Paper)
                    printf("Player choice: Paper\n"); 
            else 
                    printf("Player choice: Scissors\n"); 


            if (playerChoice == computerChoice) printf("Draw\n");
            else if(playerChoice == 1 && computerChoice == 2) {
                    printf("Computer wins\n");
                    computerScore++;
           }
            else if(playerChoice == 2 && computerChoice == 1) {
                    printf("Player wins\n");
                    playerScore++;
            }
            else if(playerChoice == 2 && computerChoice == 3) {
                    printf("Computer wins\n");
                    computerScore++;
            }
            else if(playerChoice == 3 && computerChoice == 2) {
                    printf("Player wins\n");
                    playerScore++;
            }
            else if(playerChoice == 3 && computerChoice == 1) {
                    printf("Computer wins\n");
                    computerScore++;
            }
            else if(playerChoice == 1 && computerChoice == 3) {
                    printf("Player wins\n");
                    playerScore++;
            }
    }
            return 0;
    }
