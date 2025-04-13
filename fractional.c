// Take float input and print the fractional part of the reral number.
#include<stdio.h>
int main(){
    float a;
     printf("enter your float number :");
    scanf("%f",&a);
    int b = a;
    printf("Your rael number is: %d \n",b);
    float z = a - b;
    printf("Your answer is : %f",z);
    return 0;
}