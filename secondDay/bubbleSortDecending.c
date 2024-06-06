#include <stdio.h>

int main()
{
    int numArr[] = {10, 3, 11, 6, 8}; // 11 10 8 6 3
    int temp;

    for (int i = 3; i >= 0; i--)
    {
        for (int j = 4; j >= 0; j--)
        {
            if (numArr[i] < numArr[j])
            {
                int temp = numArr[i];
                numArr[i] = numArr[j];
                numArr[j] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", numArr[i]);
    }
}