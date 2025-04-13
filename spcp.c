#include<stdio.h>
int main(){
    int cp;
     printf("Enter the cost price :");
    scanf("%d",&cp);
    int sp;
    printf("Enter the selling price :");
    scanf("%d",&sp);
    if(sp>cp){
        printf("profit");
    }
    if(cp>sp){
        printf("lose");
    }
    else{
        printf("No profit , No lose");
    }
    return 0;
}