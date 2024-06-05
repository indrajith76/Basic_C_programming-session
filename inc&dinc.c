#include <stdio.h>

int main()
{
    /*
    int num = 10;

    for (int i = 0; i < 10; i++)
    {
        // num = num + 1;
        // num++;  // <= increment

    }
    printf("%d", num);
    */

    /*
        Target:
        *
        **
        ***
        ****
        *****
        */
    /* for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    } */

    /*
    Target:

    *****
    ****
    ***
    **
    *
     */

    for (int i = 0; i < 5; i++)
    {
        for (int j = 5; j > i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}