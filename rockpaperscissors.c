#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int ask(){
    int choice;
    puts("Choose one of the following:");
    puts("1. Rock");
    puts("2. Paper");
    puts("3. Scissors");
    scanf("%d", &choice);

    return choice;
}

char* choice_identify(int choice){
    switch (choice)
    {
    case 1:
        return "Rock";
        break;
    case 2:
        return "Paper";
        break;
    case 3:
        return "Scissor";
        break;
    default:
        puts("Invalid input!");
        exit(0);
        break;
    }
}

int bot(){
    srand(time(0));
    int bot_choice = rand()%4;
    if (bot_choice==0){
        return 1;
    }
    else{
        return bot_choice;
    }
}

int main(int argc, char* argv[]){
    int int_user_choice;
    int int_bot_choice;
    int rounds;
    char* char_bot_choice;
    char* char_user_choice;

    int user_points = 0;
    int bot_points = 0;

    puts("Welcome to RPC!");
    puts("How many rounds do you want to play?");
    scanf("%d", &rounds);

    do{
        int_user_choice = ask();       
        char_user_choice = choice_identify(int_user_choice);
        printf("You have chosen %s\n", char_user_choice);
        int_bot_choice = bot();
        char_bot_choice = choice_identify(int_bot_choice);
        printf("The bot have chosen %s\n", char_bot_choice);

        if (int_user_choice == int_bot_choice){
            puts("Correct!");
            user_points++;
        }
        else{
            puts("Wrong :(");
            bot_points++;
        }
        rounds--;

    }while(rounds);
    
    if (bot_points>user_points){
        puts("Bot won!");
        puts("Better luck next time (: !");
    }
    else{
        puts("You won!");
        puts("This proves that bots cannot rule the world!");
    }

    return 0;
}