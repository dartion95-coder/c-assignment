#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    FILE *src, *dest;
    int ch;

    // Expect 2 arguments: source file and destination file
    if (argc != 3)
    {
        printf("Usage: %s <source_file> <destination_file>\n", argv[0]);
        return 1;
    }

    // Open source file for reading
    src = fopen(argv[1], "r");

    if (src == NULL)
    {
        perror("Error opening source file");
        return 1;
    }

    // Open destination file for writing
    dest = fopen(argv[2], "w");

    if (dest == NULL)
    {
        perror("Error opening destination file");
        fclose(src);
        return 1;
    }

    // Read characters and convert to uppercase
    while ((ch = fgetc(src)) != EOF)
    {
        fputc(toupper((unsigned char)ch), dest);
    }

    printf("File copied successfully with uppercase converted.\n");

    // Close files
    fclose(src);
    fclose(dest);

    return 0;
}
