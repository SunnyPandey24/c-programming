#include<stdio.h>
int main()
{
    int x;
    printf("Enter your first number : \n");
    scanf("%d",&x);
    int y;
    printf("Enter your second number : \n");
    scanf("%d",&y);
    int sum = x + y;
    printf("The sum of these numbers are : %d",sum);
    return 0;

}