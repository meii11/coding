#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	unsigned int num;
	unsigned int div;
	bool isPrimer = true;

	printf("Enter a number (q to quit ): \n");
	while (scanf("%u", &num) == 1)
	{
	    if (num <= 1)
            printf("No primes.\n");
        else
        {

            for (int i = 2; i <= num; i++)
            {
                isPrimer = true;
                for (div = 2; div * div <= i; div++)
                {
                    if (i % div == 0)
                    {
                        isPrimer = false;
                    }
                }
                if (isPrimer)
                    printf("%u is Primer \n", i);
            }
        }
        printf("Enter a number (q to quit ): \n");
    }
	printf("Done! \n");

	return 0;
}
