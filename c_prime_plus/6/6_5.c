#include <stdio.h>

void main(){
    char c_letter;
    printf("Input a capital letter: ");
    scanf("%c", &c_letter);
    const int i_tmp = c_letter - 'A' + 1;
    // printf("%d\n", i_tmp);
    int i_tmp1 = i_tmp+(i_tmp-1);

    for(int i=1;i<=i_tmp;i++){
        for(int j=(i_tmp1-i-i+1)/2;j>0;j--){
            printf(" ");
        }
        for(int t=1;t<=(i+i-1)/2+1;t++){
            printf("%c", 'A'+t-1);
        }
        for(int t=(i+i-1)/2;t>0;t--){
            printf("%c", 'A'+t-1);
        }
        for(int j=(i_tmp1-i-i+1)/2;j>0;j--){
            printf(" ");
        }
        printf("\n");
    }
}