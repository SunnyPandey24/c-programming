#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",& n);
    for(int i = 1; i<=n*2-1;i=i+2){
        printf("%d ",i);
    }
    return 0;
}