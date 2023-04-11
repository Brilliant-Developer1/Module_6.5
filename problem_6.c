#include <stdio.h>
int main()
{
    long long int e, f, b;
    scanf("%lld %lld %lld", &e, &f, &b);

    if (e != 0 && f != 0 && b != 0)
    {
        if (e <= f && e <= b)
        {
            printf("%lld", e);
        }

        else if (b <= e && b <= f)
        {
            printf("%lld", b);
        }
        else if (f <= e && f <= b)
        {
            long long int n_e = e - f;
            long long int n_b = b - f;

            if (n_e / 2 <= n_b)
            {
                printf("%lld", f + (n_e / 2));
            }
            else if (n_b <= n_e / 2)
            {
                printf("%lld", f + n_b);
            }
        }
    }

    else if (f == 0)
    {
        if (b <= e / 2)
        {
            printf("%lld", b);
        }
        else if (e / 2 <= b)
        {
            printf("%lld", (e / 2));
        }
    }
    else if (e == 0)
    {
        printf("%lld", e);
    }
    else if (b == 0)
    {
        printf("%lld", b);
    }

    return 0;
}