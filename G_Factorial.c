#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        long long int f = 1;
        for (int j = 1; j <= n; j++)
        {
            f = f * j;
        }
        printf("%lld\n", f);
    }
    return 0;
}