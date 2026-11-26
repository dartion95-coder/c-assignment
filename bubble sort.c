#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp1, *fp2, *fp3;
    char ch;

    if (argc != 4)
    {
        printf("Insufficient number of arguments.\n");
        return 1;
    }

    // Open first file
    fp1 = fopen(argv[1], "r");

    if (fp1 == NULL)
    {
        printf("Unable to open the first file.\n");
        return 1;
    }

    // Open second file
    fp2 = fopen(argv[2], "r");

    if (fp2 == NULL)
    {
        printf("Unable to open the second file.\n");
        fclose(fp1);
        return 1;
    }

    // Open third file
    fp3 = fopen(argv[3], "w");

    if (fp3 == NULL)
    {
        printf("Unable to open the third file.\n");
        fclose(fp1);
        fclose(fp2);
        return 1;
    }

    // Copy first file into third file
    while ((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp3);
    }

    // Copy second file into third file
    while ((ch = fgetc(fp2)) != EOF)
    {
        fputc(ch, fp3);
    }

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    printf("Contents of File1 and File2 are merged into File3.\n");

    return 0;
}
