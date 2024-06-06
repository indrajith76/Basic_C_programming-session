#include <stdio.h>

int main()
{
    int numArr[] = {1, 2, 3, 4, 6, 8, 10, 23, 43, 54, 18};

    // printf("Let's try to explore: %d\n", sizeof(numArr)/4);

    for (int i = 0; i < sizeof(numArr) / 4; i++)
    {
        printf("%d", i);
    }

    for (int i = 0; i < 10; i++)
    {
        // printf("%d = %d\n", i, numArr[i]);

        printf("%d", i);
        if (8 == numArr[i])
        {
            printf("\n%d=", i);
            printf("Founded!");
            break;
        }
        else{
            continue;
        }
    }
}