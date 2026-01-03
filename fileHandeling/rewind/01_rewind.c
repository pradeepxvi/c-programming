#include <stdio.h>

int main()
{
    char fileName[100] = "__example.txt";
    FILE *file = fopen(fileName, "w+");

    if (file == NULL)
    {
        printf("\n\nError on opennig %s..\n\n", fileName);
        return 1;
    }

    char dataToWrite[256];
    printf("Enter data to write \n");
    scanf("%[^\n]", dataToWrite);

    fprintf(file, "data =  %s\n", dataToWrite);

    rewind(file);

    char buffer[256];
    while (fgets(buffer, sizeof(buffer), file))
    {
        printf("\n\n%s", buffer);
    }

    fclose(file);
    return 0;
}