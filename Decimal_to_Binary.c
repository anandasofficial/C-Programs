#include <stdio.h>

int main()
{
    int number, decimalNum, remainder, base = 1;
    int binary = 0, no_of_ones = 0;

    printf("Enter a Decimal Integer:");
    scanf("%d",&number);

    decimalNum = number;
    while(number > 0)
    {
        remainder = number % 2;
        binary = binary + remainder * base;
        number = number / 2;
        base = base * 10;
        if(remainder == 1)
        {
            no_of_ones++;
        }
    }
    printf("Given Number is %d\n",decimalNum);
    printf("Binary Value of Given Number is %d\n",binary);
    printf("No of 1's int the Given Binary Number is %d",no_of_ones);
}
