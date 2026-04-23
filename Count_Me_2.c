#include <stdio.h>
#include <string.h>

int main()
{
    char s[100001];
    scanf("%s", s);
    int consonants = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        char ch = s[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
        }
        else
        {
            consonants++;
        }
    }

    printf("%d\n", consonants);
    return 0;
}