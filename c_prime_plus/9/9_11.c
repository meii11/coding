#include <stdio.h>
unsigned long Fibonacci(unsigned n){
    if(n > 2){
        return Fibonacci(n-1) + Fibonacci(n-2);
    }
    else{
        return 1;
    }
}

unsigned long Fibonacci1(unsigned n){
    int f1 = 1, f2 = 1, f3 = 1;
    // long sum = 2;
    // int *f =  (int *) malloc (sizeof(int)*n);
    for(int i = 1; i < n-1;i++){
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3; 
    }
    return f3;
}

void main(){
    unsigned int n;
    printf("Enter : \n");
    scanf("%u", &n);
    printf("%lu", Fibonacci1(n));
}