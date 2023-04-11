#include <stdio.h>
int main()
{
    int input;
    scanf("%d", &input);

    int a = input % 10;
    int b = input / 10;

    if (a % b == 0 || b % a == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}