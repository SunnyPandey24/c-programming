//given three points (x1 , y1 ),(x2,y2)and (x3,y3),wap to check if all the three pointd  fall on onr straight line.
#include<stdio.h>
int main(){
    double x1;
    printf("Enter x1: ");
    scanf("%lf",&x1);
    double y1;
    printf("Enter y1: ");
    scanf("%lf",&y1);
    double x2;
    printf("Enter x2: ");
    scanf("%lf",&x2);
    double y2;
    printf("Enter y2: ");
    scanf("%lf",&y2);
    double x3;
    printf("Enter x3: ");
    scanf("%lf",&x3);
    double y3;
    printf("Enter y3: ");
    scanf("%lf",&y3);
    double m1= (y2-y1) / (x2-x1);
    printf(" M1 %lf   ",m1);
    double m2= (y3-y2) / (x3-x2);
    printf(" M2 %lf  ",m2);
    if(m1==m2){
        printf("It's formed a straight line");
    }
    else{
          printf("It not formed a straight line");
    }
    return 0;
    


}