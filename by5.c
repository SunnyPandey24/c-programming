#include<stdio.h>
int main(){
    int x;
    printf("Enter your number: ");
    scanf("%d",&x);
    if(x%5==0){
        printf("Yes this number is divisible by 5.");
    }
    else{
        printf("Not this number is not divisible by 5.");
    }
}