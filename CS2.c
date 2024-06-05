#include <stdio.h>

int main()
{
    char charater;
    scanf("%c", &charater);

    switch (charater)
    {
    case 'a':
    case 'A': 
    case 'e': 
    case 'E': 
    case 'I': 
    case 'i': 
        printf("Vowel");
        break;
    }
}