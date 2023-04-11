#include <stdio.h>
int main()
{
    int a, b, c, input;
    scanf("%d %d %d %d", &a, &b, &c, &input);

    if (a + b * c == input)
    {
        printf("YES");
    }
    else if (a + b - c == input)
    {
        printf("YES");
    }
    else if (a - b + c == input)
    {
        printf("YES");
    }
    else if (a - b * c == input)
    {
        printf("YES");
    }
    else if (a * b + c == input)
    {
        printf("YES");
    }
    else if (a * b - c == input)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    // printf("%d %d %d %d", a, b, c, input);
    return 0;
}