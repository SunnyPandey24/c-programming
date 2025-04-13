#include <stdio.h>

int main() {
    int num, i, isPrime;

    for(num = 2; num <= 100; num++) {
        isPrime = 1; // Assume the number is prime

        // Check if num is divisible by any number from 2 to sqrt(num)
        for(i = 2; i * i <= num; i++) {
            if(num % i == 0) {
                isPrime = 0; // Not prime
                break;
            }
        }

        if(isPrime) {
            printf("%d ", num); // Print the prime number
        }
    }

    return 0;
}

// simple way by on loop ;-


// #include <stdio.h>

// int main() {
//     for(int i = 2, j; i <= 100; i++) {
//         for(j = 2; j * j <= i && i % j; j++);
//         if(j * j > i) printf("%d ", i);
//     }
//     return 0;
// }


//  {simple way by 2 loop ;-

// #include <stdio.h>

// int main() {
//     int i, j, isPrime;
//     for(i = 2; i <= 100; i++) {
//         isPrime = 1;
//         for(j = 2; j * j <= i; j++) {
//             if(i % j == 0) {
//                 isPrime = 0;
//                 break;
//             }
//         }
//         if(isPrime)
//             printf("%d ", i);
//     }
//     return 0;
// }
//  }
