#include <stdio.h>

int main(void)
{
    char str[200];
    int line, word, ch;
    int i;

    line = word = ch = 0;

    printf("Enter string terminated by ~:\n");
    scanf("%[^~]", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\n')
        {
            word++;
            line++;
        }
        else if (str[i] == ' ' || str[i] == '\t')
        {
            word++;
            ch++;
        }
        else
        {
            ch++;
        }
    }

    printf("\nNo. of characters: %d", ch);
    printf("\nNo. of words: %d", word);
    printf("\nNo. of lines: %d", line);

    return 0;
}
