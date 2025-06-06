#include <stdio.h>

/*
Objective 
a = 7, b = 3
after executeing void function( use call by refrence )
a = a+b = 10 and b = a-b = 4
*/

void execute(int *a, int *b) {
    int tmp = *a; 
    *a = *a + *b;
    *b = tmp - *b;
}
int main() {
    int a = 7, b = 3;
    execute(&a, &b);
    printf("a and b is %d , %d", a , b);
    return 0;
}
