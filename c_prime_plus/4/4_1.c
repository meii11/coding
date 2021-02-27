#include <stdio.h>

int main(){
    char c_lastNmae[20];
    char c_firstName[20];

    printf("Enter your firstname and lastname: \n");
    scanf("%s %s",c_firstName, c_lastNmae);
    printf("Hi, %s %s",c_firstName, c_lastNmae);
}