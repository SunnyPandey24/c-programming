#include<stdio.h>
void greet(){
    printf("Good Morning\n");
    printf("How are you\n");
    printf("Bye\n");
    printf("\n");
    return;
}
int main(){
    for(int i=1; i<=10; i++){
        greet();
    }
    return 0;
}