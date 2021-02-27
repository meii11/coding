#include <stdio.h>
#include <string.h>

int main(){
    char c_name[20];
    
    printf("Please enter your name: \n");
    scanf("%s", c_name);
    int i_tmp = 3 + strlen(c_name);

    printf("\"%s\"\n", c_name);
    printf("\"%20s\"\n", c_name);
    printf("\"%-20s\"\n", c_name);
    printf("\"%*s\"\n", i_tmp, c_name);
}