#include <stdio.h>
#include <string.h>

int main()
{
    char firstName[15], surname[15], fullName[30];

    gets(firstName);
    gets(surname);

    // string length
    printf("Length Of FirstName = %d\n", strlen(firstName));
    printf("Length Of surname = %d\n", strlen(surname));

    // if(firstName > surname){
    //     printf("FirstName length is higher then surname");
    // }else{
    //     printf("Surname length is higher then firstName");
    // }
    int cmp = strcmp(firstName, surname);
    printf("String Comparison: %d\n", cmp);

    fullName[30] = strcat(firstName, surname);
    printf("My name is %s\n", fullName); // concatenation

    strcpy(fullName, firstName);
    printf("My full name is %s", fullName);

    // Target => strcpy, strcat, strcmp, strlen
}