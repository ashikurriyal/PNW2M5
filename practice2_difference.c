#include <stdio.h>

int main()
{
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    long long difference = (a * b) - (c * d);
    printf("Difference = %lld\n", difference);

    return 0;
}