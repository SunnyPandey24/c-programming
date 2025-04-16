// 1.for givren n = 4(odd)-> 1,3,5,7.
// printing odd number first.(2*n-1)

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the no. of rows");
//     scanf("%d",&n);
//     for(int i=1; i<=2*n-1; i= i+2)
//     printf(" %d ",i);
//     return 0;
// }

// 2. for printig 1 , 3 , 5, 7 (4)
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the no. of rows:-");
//     scanf("%d",&n);
//     for(int i=1; i<=n;i++){
//         int a=1;
//         for(int j=1; j<=n; j++){
//             printf(" %d ",a);
//             a= a+2;

//         }
//         printf("\n");
//     }
//     return 0;}

// 3. now tringle number

#include<stdio.h>
int main(){
    int n;
    printf("Enter the no. of rows:-");
    scanf("%d",&n);
    for(int i=1; i<=n;i++){
        int a=1;
        for(int j=1; j<=i; j++){
            printf(" %d ",a);
            a= a+2;

        }
        printf("\n");
    }
    return 0;}
    
    