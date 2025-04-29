// #include<stdio.h>
// #include<math.h>
// int main(){
//     int q=pow(3,4);
//     printf("The Power is : %d",q);
//     return 0;
// }

#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("Enter the 1st number :-");
    scanf("%d",&a);
    int b;
    printf("Enter the 2nd number :- ");
    scanf("%d",&b);
    int q=pow(a,b);
    printf("The Power is : %d",q);
    return 0;
}