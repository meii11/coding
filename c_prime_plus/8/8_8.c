#include <stdio.h>
char get_choice(void);
char get_another_choice(void);
float get_num(void);

void main(){
    
    
    int ch;
    char operator;
    float result;
    float first_num, second_num;
    
    while((ch=get_choice()) != 'q'){

        printf("Enter the first number: ");
        first_num = get_num();
        printf("Enter the second number: ");
        second_num = get_num();

        switch (ch)
        {
        case 'a':
            operator = '+';
            result = first_num + second_num;
            break;
        case 's':
            operator = '-';
            result = first_num - second_num;
            break;
        case 'm':
            operator = '*';
            result = first_num * second_num;
            break;
        case 'd':
            operator = '/';
            while(second_num == 0.0){
                printf("Wrong dividend. Please input a number other than 0: ");
                second_num = get_num();
            }
            result = first_num / second_num;
            break;
        default:
            printf("Wrong enter!!");
            break;
        }

        printf("%.1f %c %.1f = %.1f\n", first_num, operator, second_num, result);

    }
    printf("Done!");
}

char get_choice(void){
    printf("Enter thr operation of your choice: \n");
    printf("a.add          s.subtract \n");
    printf("m.multiply     d.divide \n");
    printf("q.quit \n");

    int ch;
    ch = getchar();
    while(getchar() != '\n')
        continue;

    return ch;
}

float get_num(void){
    float num;
    char ch;
    while(scanf("%f", &num) != 1){
        while((ch = getchar()) != '\n'){
            putchar(ch);
        }
        printf(" is not number, please check your input.\n");
    }

    return num;

}

char get_another_choice(void){
    char ch;
    printf("Do you want to continue? ");
    printf("y.yes    n.no\n");
    ch = getchar();
    while(getchar() != '\n')
        continue;

    while(ch != 'y' || ch != 'n'){
        printf("Wrong enter, please check your input.\n");
        ch = get_another_choice();
    }
    if(ch = 'n'){
        ch = 'q';
    }
    return ch;
}