#include <stdio.h>

int main(){
    int i_num, i_tmp;
    printf("Enter a number: ");
    scanf("%d", &i_num);
    i_tmp = i_num + 10;
    while(i_num<=i_tmp){
        printf("%d\t", i_num);
        i_num++;
    }
}