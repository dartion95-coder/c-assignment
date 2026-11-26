#include <stdio.h>
#include <string.h>

int strSearch(char m_str[100], char s_str[20])
{
    int i, j;
    int pos = -1;

    for (i = 0; m_str[i] != '\0'; i++)
    {
        j = 0;

        while (m_str[i + j] == s_str[j] && s_str[j] != '\0')
        {
            j++;
        }

        if (s_str[j] == '\0')
        {
            pos = i + 1;
            return pos;
        }
    }

    return pos;
}

int main(void)
{
    char m_str[100], s_str[20];
    int pos;

    printf("Enter the main string:\n");
    fgets(m_str, sizeof(m_str), stdin);
    m_str[strcspn(m_str, "\n")] = '\0';

    printf("Enter the sub string:\n");
    fgets(s_str, sizeof(s_str), stdin);
    s_str[strcspn(s_str, "\n")] = '\0';

    pos = strSearch(m_str, s_str);

    if (pos == -1)
        printf("Substring not found in main string.");
    else
        printf("Substring found at position %d.", pos);

    return 0;
}
