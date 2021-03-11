#include <stdio.h>

void main(){
    int guess = 50;
    int high = 100;
    int small = 0;
    int ch;
    printf("I will guess your number between 0~100. \n");
    printf("Please answer bigger or smaller or yes. \n");
    printf("Is %d your number?\n", guess);

    while((ch = getchar()) != 'y'){
        if(ch == 'b'){
            small = guess;
            guess = (small + high) / 2;
            printf("Well, is it %d ?\n", guess);
        }
        else if(ch == 's'){
            high = guess;
            guess = (small + high) / 2;
            printf("Well, is it %d ?\n", guess);
        }
        else{
            printf("Wrong answer. Please enter bigger or smaller or yes. \n");
            printf("Please re-enter: ");
        }
        while(getchar() != '\n')
            continue;
    }
    printf("Done!!");
}