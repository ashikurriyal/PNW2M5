#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        int total_farmers = m1 + m2;
        int new_days = (m1 * d) / total_farmers;
        int fewer_days = d - new_days;
        printf("%d\n", fewer_days);
    }
    
    return 0;
}