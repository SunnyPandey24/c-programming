#include<stdio.h>
int main(){
  int n;
   printf("Enter a number : ");
    scanf("%d",&n);
    if(n%5==0 || n%3==0){
        if(n%15!=0){
        printf("Yes this number is divisible by 3 or 5 but not 15:");
    }
   else{
       printf(" this number is  divisible by  15:");
   }}
      else{
       printf("No this number is not divisible by 3 or 5:");
      }
    return  0;
   }