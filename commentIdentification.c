#include <stdio.h>
#include <string.h>
int main()
{
    char string[20];
    int i, t;
    printf("Enter the string: ");
    fgets(string, 20, stdin);
    if (string[0] == '/')
    {
        if (string[1] == '/')
        {
            printf("This is a comment");
        }
        else if (string[1] == '*')
        {
            for (i = 2; i < strlen(string) - 1; i++)
            {
                if (string[i] == '*' && string[i + 1] == '/')
                    t = 1;
            }
            if (t == 1)
            {
                printf("This is a comment");
            }
            else
            {
                printf("Invalid input");
            }
        }
    }
    else
    {
        printf("Not a comment");
    }
    return 0;
}
