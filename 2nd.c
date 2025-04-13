#include<stdio.h>
 int main()
{
    int x = 5;
    printf("%d",x);
    x = 7;
    printf("%d",x);
    x = x + 6;
    printf("%d",x);
    printf("\n");
    x = x - 20;
    printf("%d",x);
    x = x + 24;
    printf("\n%d",x);
    printf("\n");
    int a = 5;
    int b = 3;
    printf("%d\n",a+b);
    printf("\n");
    printf("%d",a-b);
    printf("\n%d",a*b);
    printf("\n%d",a/b);
    int c = 5;
    int d = 7;
    int e = c + d;
    printf("\n%d\n",e);
    
    float p = 3.14;                 // use of float data type(real number store)
    float q = 2.7;
    printf("%f",p);
    printf("\n");
    printf("%f",q);
    printf("\n");

    float s = 7;
    float g = 5;
    float t = s/g;                 // arithmetic operations on float data type
    printf("%f",t);               // we can also write printf("%d",s/g); there
    return 0;
}