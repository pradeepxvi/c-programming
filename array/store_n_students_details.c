
// wap to enter and display name and id of n students....

#include <stdio.h>
int main()
{
    int num_of_student;
    printf("Enter number of students:");
    scanf("%d", &num_of_student);
    getchar();

    int id[num_of_student];
    char name[num_of_student][100];

    for (int i = 0; i < num_of_student; i++)
    {
        id[i] = i + 1;
        printf("Enter name of student %d :", i + 1);
        fgets(name[i], sizeof(name[i]), stdin);
    }

    for (int i = 0; i < num_of_student; i++)
    {
        printf(" %d =  %s", id[i], name[i]);
    }

    return 0;
}