#include <stdio.h>
#include "fun.h"

int main() {
    int a[] = {1,2,3,4,5,6,7,8,9};
    int len = sizeof(a)/sizeof(int);

    // Reverse Function Use
    reverse(a,len);
    for (int i = 0; i < len; i++)
    {
        printf("%d ", a[i]);
    }

    // Linear Search Function Use
    printf("\n%d ", LinearSearch(a,len,5));

}
