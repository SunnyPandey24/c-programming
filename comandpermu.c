//  #include<stdio.h>
//  int main(){
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//   int r;
//     printf("Enter r: ");
//     scanf("%d",&r);
//     int nfact=1; // n!
//     int rfact=1; // r!
//     int nrfact=1; // nr!
//     for(int i=2; i<=n; i++){
//         nfact = nfact*i;
//     }
//     for(int i=2; i<=r; i++){
//         rfact = rfact*i;
//     }
//     for(int i=2; i<=n-r; i++){
//         nrfact = nrfact*i;
//     }
//     int ncr = nfact/(rfact*nrfact);
//     printf("%d",ncr);
//     return 0;
//  }

 #include<stdio.h>
 int factorial(int x){
  int fact = 1;
  for(int i=2;i<=x; i++){
    fact = fact*i;
  }
  return fact;
 }
 int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
  int r;
    printf("Enter r: ");
    scanf("%d",&r);
    int nfact= factorial(n); // n! // cut
    int rfact= factorial(r); // r! // cut
    int nrfact= factorial(n-r); // nr! // cut
    int ncr = nfact/(rfact*nrfact); // =factorial(n)/factorial(r)*factorial(n-r);
    printf("%d",ncr);
    return 0;
 }