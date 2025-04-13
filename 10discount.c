#include<stdio.h>
int main(){
    int quantite;
    printf("Enter the quanities : ");
    scanf("%d",& quantite);
    float price;
      printf("Enter the price : ");
       scanf("%f",& price);
        float total= quantite*price*(quantite>=1000 ? 0.9:1);
       printf("Total price : %2f\n",total);

 return 0;
}