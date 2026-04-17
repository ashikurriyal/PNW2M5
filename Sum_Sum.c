#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int pos_sum = 0;
    int neg_sum = 0;

    for (int i = 0; i < n; i++)
    {
        int v;
        scanf("%d", &v);

        if (v > 0)
        {
            pos_sum += v;
        }
        else if (v < 0)
        {
            neg_sum += v;
        }
    }

    printf("%d %d\n", pos_sum, neg_sum);

    return 0;
}