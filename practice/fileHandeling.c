#include <stdio.h>
#include <string.h>

struct info
{
    char name[100];
    int age;
    char address[100];
};

int main()
{
    struct info me;
    FILE *file = fopen("data.dat", "wb");

    strcpy(me.name, "pradeep kunwar");
    strcpy(me.address, "bharatpur chitwan");
    me.age = 10;

    if (!file)
    {
        printf("Error opening file...");
        return 1;
    }

    for (int i = 0; i < 10; i++)
    {

        fwrite(&me, sizeof(me), 1, file);
    }
    fclose(file);

    file = fopen("data.dat", "rb");

    while (fread(&me, sizeof(me), 1, file))
    {
        printf("\n\n");
        printf("name = %s\n", me.name);
        printf("age = %d\n", me.age);
        printf("address = %s\n", me.address);
    }
    fclose(file);

    return 0;
}