#include<stdio.h>

int main()
{
    int i, limit, sumOdd = 0, sumEven = 0;
    printf("Enter the Limit:\n");
    scanf("%d",&limit);

    for(i=1; i <= limit; i++)
    {
        if(i % 2 == 0)
        {
            sumEven = sumEven +  i;
        }
        else
        {
            sumOdd = sumOdd + i;
        }
}
    printf("Sum of all First %d EVEN numbers is %d\n",limit,sumEven);
    printf("Sum of all First %d ODD numbers is %d\n",limit,sumOdd);

}


