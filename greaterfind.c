// take 3 integres input and print the greater of them
#include<stdio.h>
int main(){
    int a;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    int b;
    printf("Enter the value of b : ");
    scanf("%d",&b);
     int c;
    printf("Enter the value of c : ");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("%d is a greatest number:",a);
    }
    if(b>a && b>c){
        printf("%d is a greatest number:",b);
    }
    if(c>a && c>b){
        printf("%d is a greatest number:",c);
    }
   if(a==b && b==c && c==a){
    printf("%d %d %d all are eqauls :", a ,b ,c);
   }
    return 0;
}