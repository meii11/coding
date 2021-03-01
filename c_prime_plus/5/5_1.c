#include <stdio.h>
#define MI_TO_HOUR 60

int main(){
    int i_minute, i_hour;
    printf("Enter your minutes: ");
    scanf("%d", &i_minute);
    while(i_minute>0){
        i_hour = i_minute / MI_TO_HOUR;
        i_minute = i_minute % MI_TO_HOUR;
        printf("Time is %2d:%2d \n", i_hour, i_minute);
        printf("Input another minutes: ");
        scanf("%d", &i_minute);
    }
    return 0;
}