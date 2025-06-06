#include <stdio.h>
#include <stdbool.h>

// Execercise 2 -> Recursion
// Only for n < 20 due to long int overflow 

long factorial(long n) {
    if ( n == 0 || n == 1 ) {
        return 1;
    }
    return n * factorial(n-1);
}

int main() {
    int num = 0;
    while (true)
    {
        printf("Please Enter Your Number To Calculate Factorial -> \n");
        scanf("%d", &num);
        if (num < 0) {
           printf("-----------------------------------------------\n");
           printf("The Factorial of negative numbers is not defined ! \n");
           printf("-----------------------------------------------\n");
           continue;
        } else if (num >= 20) {
           printf("-----------------------------------------------\n");
           printf("You Can Only Calculate It From 0! - 19! Due to long int overflow !\n");
           printf("-----------------------------------------------\n");
        } else {
            printf("-----------------------------------------------\n");
            printf("The Factorial of %d is %ld \n", num, factorial(num));
            printf("-----------------------------------------------\n");
        }
    }
    return 0;
}
