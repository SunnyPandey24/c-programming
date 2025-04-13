#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n>99 && n<1000){
        printf("Yes it's a three digits numbers");
    }
    else{
        printf("No it's not a three digits numbers");
    }
    return 0;
}