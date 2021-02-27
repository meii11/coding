#include <stdio.h>
#define A 21.3
#define B 21.29

int main(){
    printf("The input is %.1f or %.1e.\n", A, A);
    printf("The input is %+.3f or %.3e.\n", B, B);
}