#include<stdio.h>
int main(){
    int n;
    printf("Enter the  number: ");
    scanf("%d",&n);
    for(int i=2; i<=n-1; i++){
        if(n%i==0){
        printf("The given number  is composite number\n");
    }
    return 0;
}
}