// gp 110 , 50 ,25 upto n term

#include<stdio.h>
int main(){
int n;
printf("Enter a number :");
scanf("%d",&n);
float a= 100;
for(int i=1; i<=n; i++){
    printf("%f ",a);
    a = a*1/2;
}
}