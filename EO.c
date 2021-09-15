#include <stdio.h>

int i,num1,num2;
void mainmenu();
void even();
void odd();
int main()
{
    mainmenu();
    return 0;
}
void even()
{

    printf("Enter the value of num1:\n");
    scanf("%d",&num1);
    printf("Enter the value of num2:");
    scanf("%d",&num2);
    for(i = num1; i <= num2; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d\t",i);
        }
    }

}
void odd()
{

    printf("Enter the value of num1:\n");
    scanf("%d",&num1);
    printf("Enter the value of num2:");
    scanf("%d",&num2);
    for(i = num1; i <= num2; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d\t",i);
        }
    }


}
void mainmenu()
{
    printf("Enter Option!\n");
    printf("1.Even\n");
    printf("2.Odd\n");
    int option;
    scanf("%d",&option);
    if(option == 1)
    {
        even();
    }
    else if(option == 2)
    {
        odd();
    }
    else
    {
        printf("");
    }




}
