#include <stdio.h>
int sum(int [], int n);

int main(){
    int array[3] = {2, 2, 3};
    for(int i = 0; i < 3; i++){
        printf("%d", *(array + i));
    }
    printf("\n");
    int tmp = sum(array, 3);
    for(int i = 0; i < 3; i++){
        printf("%d", *(array + i));
    }
    return 0;
}

int sum(int an[], int n){
    int i;
    int total = 0;

    for(i = 0; i < n; i++){
        total += an[i]++;  // equal to * (an + i) + 1
    }
    return total;
}

// 这里有bug，暂时看不出来，为什么会多输出一个%
// 223
// 223%   