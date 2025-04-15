// solidreactangle by nasted loop for taking input by user.


#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of Rows : ");   // horizental 2nd loop(number of star in each line)  {rows}
    scanf("%d",&n);
    int m;
    printf("Enter the number of Colume : ");   // vertical 1st loop(lines)  {colume}
    scanf("%d",&m);
    for(int i =1; i<=m;i++){
        for(int i=1; i<=n; i++){
        printf(" * "); }

        printf("\n"); // enter after evry line.
    }
    return 0;
}