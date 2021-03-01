#include <stdio.h>
#define DAY_TO_WEEK 7

int main(){
    int i_weeks, i_days, i_tmp;
    printf("Enter days number: ");
    scanf("%d", &i_days);
    while(i_days>0){
        i_weeks = i_days / DAY_TO_WEEK;
        i_tmp = i_days;
        i_days = i_days % DAY_TO_WEEK;
        printf("%d days are %d weeks, %d days. \n",i_tmp,i_weeks,i_days);
        printf("Input another minutes: ");
        scanf("%d", &i_days);
    }
    return 0;
}