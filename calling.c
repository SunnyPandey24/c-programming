#include<stdio.h>
void englend(){
    printf("You are in Englend\n"); //3
    return;
}
void australia(){
    printf("you are in Australia\n"); //2
    englend();
    return;
}
void india(){
    printf("You are in India\n");  //1
    australia();
    return;
}
int main(){
    india();

    return 0; // 4
}