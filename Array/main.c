#include <stdio.h>
#include "fun.h"

int main() {
    int a[] = {1,2,3,4,5,6,7,8,9};
    int len = sizeof(a)/sizeof(int);
    reverse(a,len);
    for (int i = 0; i < len; i++)
    {
        printf("%d ", a[i]);
    } 
}
