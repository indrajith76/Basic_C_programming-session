#include <stdio.h>
#include <math.h>

int main()
{
    int numbers[10][3];

    for (int i = 0; i < 10; i++)
    {
        numbers[i][0] = i + 1;
        numbers[i][1] = pow(i + 1, 2);
        numbers[i][2] = pow(i + 1, 3);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d \t", numbers[i][0]);
        printf("%d \t", numbers[i][1]);
        printf("%d", numbers[i][2]);
        printf("\n");
    }
}