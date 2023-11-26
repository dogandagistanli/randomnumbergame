#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int sayi, tercih, whilecontroller = 1;
    while (whilecontroller = 1)
    {
        printf("------------------------------------------------------\n");
        printf("WELCOME TO PLAY WITH ME GAME PLATFORM\n");
        printf("------------------------------------------------------\n\n");
        printf("1. Play the Number Guessing Game\n");
        printf("2. Play the Scissor-Rock-Paper Game\n");
        printf("3. Exit\n\n");
        printf("Choose what to do (1,2,3): ");
        scanf("%d", &tercih);
        if (tercih == 1)
        {
            int randomnum1, guess, guessnumber = 0, questionnumber = 0, question;
            char game1;
            randomnum1 = rand() % 100;
            printf("\n\n*****Welcome to Number Guessing Game******\n");
            while (1)
            {
                printf("Make a guess or Ask a question (Input M or A): ");
                scanf(" %c", &game1);
                if (game1 == 'M')
                {
                    printf("Make your best guess for the number between 1-100: ");
                    scanf("%d", &guess);
                    if (guess > randomnum1)
                    {
                        printf("It is higher than the number.\n");
                        guessnumber++;
                        continue;
                    }
                    else if (guess < randomnum1)
                    {
                        printf("It is lower than the number.\n");
                        guessnumber++;
                        continue;
                    }
                    else
                    {
                        guessnumber++;
                        break;
                    }
                }
                else if (game1 == 'A')
                {
                    printf("\nQuestions to ask: ");
                    printf("\n1. Is it even or odd?");
                    printf("\n2. Is it >50?\n");
                    printf("Choose question: ");
                    scanf("%d", &question);
                    if (question == 1)
                    {
                        if (randomnum1 % 2 == 0)
                        {
                            printf("Number is even\n");
                            questionnumber++;
                            continue;
                        }
                        else
                        {
                            printf("Number is odd\n");
                            questionnumber++;
                            continue;
                        }
                    }
                    else if (question == 2)
                    {
                        if (randomnum1 > 50)
                        {
                            printf("Number is > 50\n");
                            questionnumber++;
                            continue;
                        }
                        else
                        {
                            printf("Number is not > 50\n");
                            questionnumber++;
                            continue;
                        }
                    }
                }
            }
            printf("Congratulations!! You guessed the number correctly!!!!");
            printf("You have made %d guesses, you asked %d questions. Bye!\n", guessnumber, questionnumber);
        }
        if (tercih == 2)
        {
            int choice, machinescore=0, yourscore = 0, machinechoice, roundnumber=0;
            
            printf("\n\n*****Welcome to Scissor-Rock-Paper Game ******\n");
            while (1)
            {
                machinechoice = rand() % 3;
                printf("\nInput 0 for scissor, 1 for rock, 2 for paper: ");
                scanf(" %d", &choice);
                if (choice == 0 && machinechoice == 0)
                {
                    roundnumber++;
                    printf("The machine chose scissor. You chose scissor.\n");
                    printf("No one won!\n");
                    printf("The result: you %d-%d machine",yourscore,machinescore);
                }
                else if (choice == 0 && machinechoice == 1)
                {
                    printf("The machine chose rock. You chose scissor.\n");
                    machinescore++;
                    roundnumber++;
                    printf("The machine won round %d.", roundnumber);
                    printf("The result: you %d - %d machine", yourscore, machinescore);
                }
                else if (choice == 0 && machinechoice == 2)
                {
                    printf("The machine chose paper. You chose scissor.\n");
                    yourscore++;
                    roundnumber++;
                    printf("You won round %d.\n", roundnumber);
                    printf("The result: you %d-%d machine", yourscore, machinescore);
                }
                else if (choice == 1 && machinechoice == 0)
                {
                    printf("The machine chose scissor. You chose rock.\n");
                    yourscore++;
                    roundnumber++;
                    printf("You won round%d.\n",roundnumber);
                    printf("The result: you %d-%d machine",yourscore, machinescore);
                }
                else if (choice == 1 && machinechoice == 1)
                {
                    roundnumber++;
                    printf("The machine chose rock. You chose rock.\n");
                    printf("No one won!\n");
                    printf("The result: you %d-%d machine");
                }
                 else if (choice == 1 && machinechoice == 2)
                {
                    printf("The computer chose paper. You chose rock.\n");
                    machinescore++;
                    roundnumber++;
                    printf("The machine won round %d.\n",roundnumber);
                    printf("The result: you %d-%d machine",yourscore, machinescore);
                }
                else if (choice == 2 && machinechoice == 0)
                {
                    printf("The machine chose scissor. You chose paper.\n");
                    machinescore++;
                    roundnumber++;
                    printf("The machine won round %d.\n",roundnumber);
                    printf("The result: you %d-%d machine",yourscore, machinescore);
                }
                else if (choice == 2 && machinechoice == 1)
                {
                    printf("The machine chose rock. You chose paper.\n");
                    yourscore++;
                    roundnumber++;
                    printf("You won round %d.\n",roundnumber);
                    printf("The result: you %d-%d machine",yourscore, machinescore);
                }
                else if (choice == 2 && machinechoice == 2)
                {
                    roundnumber++;
                    printf("The machine chose paper. You chose paper.\n");
                    printf("No one won!\n");
                    printf("The result: you %d-%d machine",yourscore,machinescore);
                }
                if(machinescore==5 && machinescore>yourscore){
                    printf("\nOuch!!! You lose :( The last score is you %d-%d machine.\n",yourscore,machinescore);
                    break;
                }
                else if(yourscore==5 && yourscore>machinescore){
                    printf("\nHeey!!! You win :) The last score is you %d - %d machine.\n",yourscore,machinescore);
                    break;
                }
            }
        }
        if(tercih==3){
            printf("\nBye!");
            break;
        }
    }
}