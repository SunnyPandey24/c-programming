// wap to print the reverse the programe.
#include<stdio.h>
int main(){
 int a;
 printf("Enter the number : ");
 scanf("%d",&a);
 while (a){
    printf("%d",a%10);         // we use % 10 for printibg last nnumber because od dividend
    a=a/10;

 }
 return 0;
 
}