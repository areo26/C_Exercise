#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// Exercise 3 - Switch-Case

int main()
{
    int input;
    float num;
    while (true)
    {
        printf("What You Want To Use :\n 0. Exit \n1. km to mile \n2. kg to pound \n3. cm to inch\n4. inch to meter\n");
        scanf("%d", &input);

        switch (input)
        {
        case 0:
            printf("exiting ......");
            exit(0);
            break;
        case 1:
            printf("Value in km ? : ");
            scanf("%f", &num);
            printf("%f km in miles is %f \n", num, (num / 1.609));
            printf("---------------------------------------------\n");
            break;

        case 2:
            printf("Value in kg ? : ");
            scanf("%f", &num);
            printf("%f kg in pound is %f \n", num, (num * 2.205));
            printf("---------------------------------------------\n");
            break;

        case 3:
            printf("Value in cm ? : ");
            scanf("%f", &num);
            printf("%f cm in inch is %f \n", num, (num / 2.54));
            printf("---------------------------------------------\n");
            break;

        case 4:
            printf("Value in inch ? : ");
            scanf("%f", &num);
            printf("%f inch in meter is %f \n", num, (num / 39.37));
            printf("---------------------------------------------\n");
            break;

        default:
            printf("Invalid input pick 0-4 \n");
            printf("---------------------------------------------\n");
            break;
        }
    }
    return 0;
}
