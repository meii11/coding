// #include <stdio.h>
// #include <ctype.h>
// char judge_alpha(void){
//     int ch;
//     ch = getchar();
//     if(ch>=0 && ch<=9){
//         printf("ERROR, Please enter alpha not number");
        
//     }
//     return ch;
// }
// void main(){
//     int ch;
//     int i_counter = 0;

//     while((ch = judge_alpha()) != EOF){
//         if(isspace(ch)){
//             i_counter ++;
//         }
//     }
//     printf("There are %d words.", i_counter);
// }

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
	char ch;
	int num=0,word=0;
	bool inword = false;
	
	while((ch = getchar()) != EOF)
		{
			if(isalpha(ch) && !inword) //judge words start
				{
					inword = true;
					word ++;	//count the number of the word you entered
				}

			if(!isalpha(ch)&&inword)		//judge words end
				{
					inword = false;
					printf(" contains %d letters\n",num);
					num = 0;
				}
			if(inword)    //count the number of one word
				{
					num ++;
					putchar(ch);
				}
		}
		printf("You enter %d words.\n",word);
		
return 0;
}