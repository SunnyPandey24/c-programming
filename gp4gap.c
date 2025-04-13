#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a=3;
    for(int i=4; i<=n; i++){
        printf("%d ",a);
        a = a*4;
    }
    return 0;
}