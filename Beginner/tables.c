#include <stdio.h>
#include <stdbool.h>

// Exercise 1 - Loops

int main()
{
    while (true)
    {
        long int num;
        printf("Enter The Number To Write Table : \n");
        scanf("%ld", &num);
        printf("--------------------------------------\n");
        for (int i = 1; i <= 10; i++)
        {
            printf("%ld x %d = %ld \n", num, i, i * num);
        }
        printf("--------------------------------------\n");
    }
}
