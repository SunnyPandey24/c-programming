#include<stdio.h>
int main(){
    int a;
    printf("Enter base number : ");
    scanf("%d",&a);
    int b;
    printf("Enter power number : ");      // b is power in loop change poer not base every time
    scanf("%d",&b);
    int power=1;
    for(int i =1; i<=b;i++){
        power= power*a;

    }
    printf("%d raised to the power %d is %d", a,b,power);
   
    return 0;

}