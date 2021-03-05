#include <stdio.h>

void main(){
    int i_terms;
    float f_1=1.0,f_2=1.0;
    printf("enter terms you want to run: ");
    scanf("%d", &i_terms);
    for(int i=2;i<=i_terms;i++){
        f_1 += 1.0/(float)i;
        if(i%2==0){
            f_2 -= 1.0/(float)i;
        }
        else{
            f_2 += 1.0/(float)i;
        }
    }
    printf("%f\t%f", f_1, f_2);
}