#include <stdio.h>
#include <string.h>

void delStr(char str[100], int pos, int n);

int main(void)
{
    char str[100];
    int pos, num;

    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Enter position: ");
    scanf("%d", &pos);

    printf("Enter number of characters to delete: ");
    scanf("%d", &num);

    delStr(str, pos, num);

    printf("Modified string: ");
    puts(str);

    return 0;
}

void delStr(char str[100], int pos, int n)
{
    int i = 0, j = 0;

    while (str[i] != '\0')
    {
        if (j == pos - 1)
            j = n + i;

        str[i] = str[j];

        i++;
        j++;
    }

    str[i] = '\0';

    return;
}
