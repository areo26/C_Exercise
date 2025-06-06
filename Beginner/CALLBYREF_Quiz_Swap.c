#include <stdio.h>

void swap(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}
 
int main() {
    int a = 8, b = 9;
    printf("before swap %d, %d \n", a, b);
    swap(&a, &b);
    printf("after swap %d, %d \n", a, b);
    return 0;
}
