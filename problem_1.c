#include <stdio.h>
int main()
{
    char input;
    scanf("%c", &input);

    if (input == 'Z' || input == 'z')
    {
        char res = input - 25;
        printf("%c", res);
    }
    else
    {
        char res = input + 1;
        printf("%c", res);
    }
    return 0;
}