#include <stdio.h>
int main()
{
    float cup;

    printf("Enter the cup number:");

    scanf("%f", &cup);

    printf("%.1f cup equal to %.1f pints\n", cup, cup / 2);
    printf("%.1f cup equal to %.1f ounce\n", cup, cup * 8);
    printf("%.1f cup equal to %.1f big spoon\n", cup, cup * 8 * 2);
    printf("%.1f cup equal to %.1f spoon\n", cup, cup * 8 * 2 * 3);

    return 0;

}
