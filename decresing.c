//dispay thios ap - 100 , 97 , 94 , ...... upto all terms which are positive.

#include<stdio.h>
int main(){
    int n;
    printf("Enter  a number: ");
    scanf("%d",&n);
    int a=100;
    for(int i=1; i<=n; i++){
        printf("%d ", a);
        a = a - 3;
    }
    return 0;
}