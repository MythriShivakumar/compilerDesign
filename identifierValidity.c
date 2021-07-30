#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char string[20];
    printf("Enter the string: ");
    fgets(string, 20, stdin);
    if (isdigit(string[0]))
    {
        printf("This is not a valid identifier");
    }
    else
    {
        printf("This is a valid identifier");
    }
    return 0;
}
