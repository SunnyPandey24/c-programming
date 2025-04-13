#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n%3==0 && n%5==0){
        printf("The number is divisible by 3 and 5: ");
    }
    else{
        printf("The number is not divisible by 3 and 5: ");

    }
    return 0;
}
