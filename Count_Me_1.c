#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int count2 = 0;
    int count3 = 0;

    for (int i = 0; i < n; i++)
    {
        int val;
        scanf("%d", &val);

        if (val % 2 == 0)
        {
            count2++;
        }
        else if (val % 3 == 0)
        {
            count3++;
        }
    }
    printf("%d %d\n", count2, count3);
    return 0;
}