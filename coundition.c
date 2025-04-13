#include<stdio.h>
int main(){
    int x;
    printf("Enter your number: ");
    scanf("%d",&x);
    if(x%2==0){
        printf("Even Number");
    }
    if(x%2!=0){
        printf("Odd Number");
    }
    return 0;
}