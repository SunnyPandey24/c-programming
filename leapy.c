// any yera is input through the keeyboards . write a program to determine wether the yera is a leap year or not 
#include<stdio.h>
int main(){
    int x;
    printf("Enter the year:");
    scanf("%d",&x);
    if(x%4==0){
    printf("Yes x is a leap year:");
}
else{
    printf("No x is not a leap year:");
}
}