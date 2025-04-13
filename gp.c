// an = ar*n-1{a = start, r= common factor};
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     for(int i = 1 ; i<=1*2*n-1;i=i*2){
//         printf("%d ",i);
//     }
//     return 0;
// }
#include<stdio.h>
int main(){
    int n;
     printf("Enter a number: ");
     scanf("%d",&n);
     int a = 1;
     for(int i =1; i<=n;i++){
         printf("%d ",a);
         a = a*2;

     }
     return 0; 
}