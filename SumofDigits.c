#include <stdio.h>

int main()
{
    int number, temp, reminder, sum = 0,quotient;

    printf("Enter the Number:");
    scanf("%d",&number);

    temp = number;

    while(number > 0)
    {
        reminder = number % 10;
        sum = sum + reminder;
        number = number / 10;
    }
    printf("Sum of the Digits of %d is:%d",temp,sum);

}

