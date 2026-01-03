#include <stdio.h>
#include <string.h>
struct details
{
    char name[100];
    char address[200];
};
int main()
{
    int num = 5;
    struct details ppl[num];

    for (int i = 0; i < num; i++)
    {
        printf("\n\nEnter details of people %d..\n", i + 1);

        printf("name:");
        scanf(" %[^\n]", ppl[i].name);

        printf("address:");
        scanf(" %[^\n]", ppl[i].address);
    }

    for (int i = 0; i < num; i++)
    {
        if (strcmp(ppl[i].address, "kathmandu") == 0)
        {
            printf("\n\n");
            printf("name = %s\n", ppl[i].name);
            printf("address = %s\n", ppl[i].address);
        }
    }

    return 0;
}