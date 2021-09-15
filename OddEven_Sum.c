#include<stdio.h>

void main()
{
    int i, number, odd = 0, even = 0;
    printf("Enter the Number:\n");
    scanf("%d",&number);

    for(i=1; i<=number; i++)
    {
        if(i % 2 == 0)
        {
            even = even +  i;
        }
        else
        {
            odd = odd + i;
        }
}
    printf("Sum of all EVEN numbers is %d\n",even);
    printf("Sum of all ODD numbers is %d\n",odd);

}


