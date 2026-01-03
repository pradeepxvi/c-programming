
// wap to read name class rollno of 10 students

#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[100];
    int rollno;
    int class;
};

int main()
{

    int num;

    printf("Enter number of student:");
    scanf("%d", &num);

    struct student st[num];

    for (int i = 0; i < num; i++)
    {
        printf("Enter detail of student %d..\n\n", i + 1);

        printf("name:");
        scanf(" %[^\n]", st[i].name);

        printf("clas:");
        scanf(" %d", &st[i].class);

        printf("roll no:");
        scanf(" %d", &st[i].rollno);
    }

    FILE *fp = fopen("abyss.txt", "w");

    for (int i = 0; i < num; i++)
    {
        fwrite(&st[i], sizeof(st[i]), 1, fp);
    }

    fclose(fp);

    fp = fopen("abyss.txt", "r");

    struct student temp;

    while (fread(&temp, sizeof(temp), 1, fp))
    {
        printf("\n\n---------------------\n");
        printf("name = %s\n", temp.name);
        printf("class = %d\n", temp.class);
        printf("roll no = %d\n", temp.rollno);
    }

    fclose(fp);
    return 0;
}
