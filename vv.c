#include<stdio.h>
int main(){
    int a , b ;
    printf("Enter the Dividend:");
    scanf("%d",& a);
    printf("Enter the Divisor:");
    scanf("%d",& b);
    int q = a/b;
    printf("The quatiant is : %d",q);
    int r = a - (b*q);
    printf("\nThe remainder when %d is divided by %d is : %d",a,b,r);



    return 0;
}