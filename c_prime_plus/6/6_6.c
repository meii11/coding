#include <stdio.h>

void main(){
    int i_min, i_max;
    printf("Please enter the upper and lower limits of the array: ");
    scanf("%d", &i_max);
    scanf("%d", &i_min);
    if(i_min>i_max){
        printf("ERROR!\e");
    }
    printf("NUMBER SQUARE CUBE\n");
    for(int i=i_min;i<=i_max;i++){
        printf("%6d %6d %4d \n",i,i*i,i*i*i);
    }
}