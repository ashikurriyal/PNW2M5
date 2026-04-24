#include <stdio.h>

int main()
{
    int t;
    if (scanf("%d", &t) != 1)
        return 0;

    while (t--)
    {
        char s[10001];
        scanf("%s", s);

        int capital = 0;
        int small = 0;
        int digits = 0;

        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                capital++;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                small++;
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                digits++;
            }
        }

        printf("%d %d %d\n", capital, small, digits);
    }

    return 0;
}