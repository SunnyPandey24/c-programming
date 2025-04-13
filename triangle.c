#include<stdio.h>
int main(){
    int a;
    printf("Enter the A side:");
    scanf("%d",&a);
      int b;
    printf("Enter the B side:");
    scanf("%d",&b);
      int c;
    printf("Enter the C side:");
    scanf("%d",&c);
    if(a+b>c && a+c>b && c+b>a){
        printf("Yes the given side make a triangle.");
    }
    else{
        printf("NO it can't be a triangle.");
    }
    return 0;
}