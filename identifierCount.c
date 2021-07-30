#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char string1[20][20] = {"for\n", "while\n", "if\n", "else if\n", "else\n", "do\n", "char\n", "switch\n", "int\n", "double\n", "float\n"};
    char string2[20];
    int flag = 0;
    int i;
    printf("Enter String: ");
    fgets(string2, 20, stdin);
    if (isalpha(string2[0]))
    {
        for (i = 0; i < 11; i++)
        {
            if (strcmp(string1[i], string2) == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            printf("It is a Keyword");
        }
        else
        {
            printf("It is an Identifier");
        }
    }
    else if (isdigit(string2[0]))
    {
        printf("It is a digit");
    }
    else
    {
        switch (string2[0])
        {
        case '+':
            printf("+ Operator");
            break;
        case '-':
            printf("- Operator");
            break;
        case '*':
            printf("* Operator");
            break;
        case '/':
            printf("/ Operator");
            break;
        case '=':
            printf("= Operator");
            break;
        }
    }
}
