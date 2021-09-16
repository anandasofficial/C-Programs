#include <stdio.h>

int main()
{
    int number, temp, remainder, sum = 0;

    printf("Enter the Number:");
    scanf("%d",&number);

    temp = number;

    while(number > 0)
    {
        remainder = number % 10;
        sum = sum + remainder;
        number = number / 10;
    }
    printf("Sum of the Digits of %d is:%d",temp,sum);

}

