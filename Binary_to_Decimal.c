#include <stdio.h>

int main()
{
    int number, binaryValue = 0, decimalValue = 0;
    int base = 1, remainder;

    printf("Enter the Binary Number(1s and 0s):");
    scanf("%d",&number);

    binaryValue = number;
    while(number > 0)
    {
        remainder = number % 10;
        decimalValue = decimalValue + remainder * base;
        number = number / 10;
        base = base * 2;
    }
    printf("The Given Binary Number is %d\n",binaryValue);
    printf("The Decimal Value of Given Binary Number is %d",decimalValue);
}
