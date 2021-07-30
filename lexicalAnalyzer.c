#include <stdio.h>
#include <string.h>
int main()
{
    char string[20];
    int i = 0;
    int n = 1;
    printf("Enter the string ");
    fgets(string, 20, stdin);
    for (i = 0; i < strlen(string); i++)
    {
        if (string[i] >= 'A' && string[i] <= 'Z' || string[i] >= 'a' && string[i] <= 'z')
        {
            if (string[i + 1] == '+' || string[i + 1] == '-' || string[i + 1] == '*' || string[i + 1] == '/' || string[i + 1] == '=' || string[i + 1] == '\0' || string[i+1] == '\n' || string[i+1] == ' ')
            {
                printf("id%d", n);
                n++;
            }
        }

        else if (string[i] >= 48 && string[i] <= 57)
        {
            printf("%c", string[i]);
        }
        else
        {
            switch (string[i])
            {
            case '+':
                printf("+");
                break;
            case '-':
                printf("-");
                break;
            case '*':
                printf("*");
                break;
            case '/':
                printf("/");
                break;
            case '\n':
                printf(" ");
                break;
            case '=':
                printf("=");
                break;
            case ' ':
                printf(" ");
                break;
            default:
                printf("Error");
            }
        }
    }
}
