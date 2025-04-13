// principal rate time s.i 
#include<stdio.h>
int main()
{
    float principal , rate , time , SI;
    printf("Enter you principal:");
    scanf("%f",& principal);
    printf("Enter you rate:");
    scanf("%f",&rate);
    printf("Enter you time:");
    scanf("%f",& time);
    SI = (principal * rate * time ) / 100;
    printf("Your simple intrest is: %f",SI);
    return 0;

}