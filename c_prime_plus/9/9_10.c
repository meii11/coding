#include <stdio.h>
void to_binary(unsigned long, int);

int main(void){
    unsigned long number;
    int i_n;
    printf("Enter an integer (q to quit) :\n");
    while(scanf("%lu %d", &number, &i_n) == 2){
        printf("Binary equivalent: ");
        to_binary(number, i_n);
        putchar('\n');
        printf("Enter an integer (q to quit): \n");
    }
    printf("Done");
}

void to_binary(unsigned long n, int i){
    int r;
    r = n % i;
    if(n >= i){
        to_binary(n / i, i);
    }
    printf("%d", r);
}