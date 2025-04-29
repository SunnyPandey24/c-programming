#include<stdio.h>
int add(int x, int y){
    return x+y; // here we can give commond like +, *,%
}
int main(){   // main function start from here 
    int a;
    printf("Enter the 1st Number:-");
    scanf("%d",&a);
    int b;
    printf("Enter the 2nd Number:-");
    scanf("%d",&b);
    int sum = add (a,b);
    printf("%d",sum);
    return 0;
}