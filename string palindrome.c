#include <stdio.h>
#include <string.h>

int isSame(char s[100])
{
    int i, j;
    int l = strlen(s);
    int match = 1;

    i = 0;
    j = l - 1;

    while (i < j && match)
    {
        if (s[i] != s[j])
        {
            match = 0;
        }
        else
        {
            i++;
            j--;
        }
    }

    return match;
}

int main(void)
{
    char str[100];
    int match = -1;

    printf("Enter string:\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    match = isSame(str);

    if (match)
        printf("The given string is a palindrome.");
    else
        printf("The given string is not a palindrome.");

    return 0;
}
