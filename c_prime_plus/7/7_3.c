// #include <stdio.h>
// #include <ctype.h>
// // float average(int)

// void main(){
//     char ch;
//     int i_even=0, i_odd=0;
//     float f_even_sum=0.0, f_odd_sum=0.0;
//     printf("Please enter some numbers except 0; enter 0 to quit.\n");

//     while((ch=getchar()) != '0')

//         if(ch % 2 == 0)
//             putchar((int)ch);
//             putchar('\n');
//         //     i_even ++;
//         //     f_even_sum += ch;
//         // }
//         // else{
//         //     i_odd ++;
//         //     printf("%d", ch);
//         //     f_odd_sum += ch;
//         // }
    
//     // printf("You have entered %d even numbers and %d odd numbers.\n", i_even, i_odd);
//     // printf("And the mean of even is %f, odd is %f", f_even_sum, f_odd_sum);
// }

#include <stdio.h>
int main(void)
{
	int num;
	int even_c = 0;
	int odd_c = 0;
	int even_sum = 0;
	int odd_sum = 0;
	float even_aver; 
	float odd_aver;
	
	while ( scanf("%d", num) && num != 0)
	{
		if (num % 2)	//odd number
		{
			odd_c++;
			odd_sum += num;
		}
		else
		{
			even_c++;
			even_sum += num;	
		}
	}
	even_aver = (float)even_sum / even_c;
	odd_aver = (float)odd_sum / odd_c;
	if (even_c > 0)
		printf("%d even numbers and average is %.3f \n", even_c, even_aver);
	if (odd_c > 0)
		printf("%d odd numbes and averag is %.3f \n", odd_c, odd_aver);
	printf("Done! \n");
	return 0;
}
