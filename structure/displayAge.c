// wap to dislpay the details of students using structure...
//(age > 18)
#include <stdio.h>

struct st
{
    char name[100];
    int age;
};
int main()
{
    int numOfStudents;
    printf("Enter number of students:");
    scanf(" %d", &numOfStudents);
    printf("\n\n");

    struct st students[numOfStudents];

    for (int i = 0; i < numOfStudents; i++)
    {

        printf("Enter name :");
        scanf(" %[^\n]", students[i].name);

        printf("Enter age :");
        scanf(" %d", &students[i].age);
    }

    for (int i = 0; i < numOfStudents; i++)
    {

        if (students[i].age > 18)
        {
            printf("\n\n");
            printf("name = %s\n", students[i].name);
            printf("rollNo = %d\n", students[i].age);
        }
    }

    return 0;
}