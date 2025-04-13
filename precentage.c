#include<stdio.h>
int main(){
    int a;
    printf("Enter a precentage: ");
    scanf("%d",&a);

    if(a==91 && a<100){
        printf("Excellent");
    }
    if(a==81 && a<91){
        printf("Very Good");
    }
    if(a==71 && a<81 ){
        printf("Good");
    }
    if(a==61 && a<71){
        printf("Can be better");
     
    }
    if(a==51 && a<61){
        printf(" Average ");
    }
    if(a==41 && a<51  ){
        printf(" Below Average");
    }
    if(a<41){
        printf("Fail");

    }
    
    
    
    return 0;
}