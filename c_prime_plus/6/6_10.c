#include <stdio.h>

void main(){
    int i_min, i_max;
    printf("enter lower and upper integer limits: ");
    scanf("%d %d", &i_min, &i_max);
    while(i_min <= i_max){
        int i_square = 0;
        for(int i=i_min;i<=i_max;i++){
            i_square+=i*i;    
        }
        printf("The sum of the squares from %d to %d is %d\n",i_min, i_max, i_square);
        printf("enter lower and upper integer limits: ");
        scanf("%d %d", &i_min, &i_max);
    }
}