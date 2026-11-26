#include <stdio.h>
#include <string.h>

void strJoin(char str1[100], char str2[100], int pos);

int main(void)
{
    char str1[100], str2[100];
    int pos;

    printf("\nEnter string1:\n");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("\nEnter string2:\n");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    printf("\nEnter position: ");
    scanf("%d", &pos);

    strJoin(str1, str2, pos);

    puts(str1);

    return 0;
}

void strJoin(char s1[100], char s2[100], int p)
{
    int i, j, l1, l2;
    char temp[100];

    l1 = strlen(s1);
    l2 = strlen(s2);

    if (p < 1 || p > l1 + 1 || l1 + l2 >= 100)
    {
        printf("Invalid position or string length.\n");
        return;
    }

    i = p - 1;
    j = 0;

    while (i < l1)
    {
        temp[j] = s1[i];
        i++;
        j++;
    }

    temp[j] = '\0';

    i = p - 1;
    j = 0;

    while (j < l2)
    {
        s1[i] = s2[j];
        i++;
        j++;
    }

    i = p + l2 - 1;
    j = 0;

    while (temp[j] != '\0')
    {
        s1[i] = temp[j];
        i++;
        j++;
    }

    s1[i] = '\0';
}
