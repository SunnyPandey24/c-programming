#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int sum=0;
    int lastDigit = 0;
    while (n!=0)
    {
        lastDigit =  n%10;
         if(n%2==0)
            sum = sum + lastDigit;
            n = n/10;
        printf("The sum of even digits of number is %d",sum);
      

       
    }
    return 0;
    
}