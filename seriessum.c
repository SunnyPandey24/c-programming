//if the given number is even  then :- like . 1-2+3-4+5-6;
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int sum;
    if(n%2==0){
        sum = -n/2;
        printf("The sum is %d",sum);
    }
    if(n%2!=0){
        sum = -n/2 + n;
        printf("The sum is %d",sum);
    }
    return 0;
}