//#include<stdio.h>
//int main(){
   // int l;
   // printf("Enter the length:");
    //scanf("%d",&l);
   // int b;
   // printf("Enter the breath:");
    //scanf("%d",&b);
    //float area = l * b;
   // printf("the area is : %f \n",area);
   // float perimeter = 2 * (l+b);
    //printf("the perimeter is : %f \n",perimeter);
    //if(area>perimeter){
   //     printf("area is greater than perimeter");
   // }
  //  else{
     //   printf("area is less than perimeter");
   // }
//}//
#include<stdio.h>
int main(){
    int l;
    printf("Enter the length:");
    scanf("%d",&l);
    int b;
    printf("Enter the breath:");
    scanf("%d",&b);
    int a = l * b;
    printf("the area is : %d \n",a);
    int p = 2 * (l+b);
    printf("the perimeter is : %d \n",p);
    if(a>p){
        printf("area is greater than perimeter");
    }
    else{
        printf("area is less than perimeter");
    }
    return 0;
}