// ascending roll no

#include <stdio.h>

struct st
{
    char name[100];
    int rollNo;
    float gpa;
    char program[100];
    char faculty[100];
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

        printf("Enter roll no :");
        scanf(" %d", &students[i].rollNo);

        printf("Enter gpa :");
        scanf(" %f", &students[i].gpa);

        printf("Enter program :");
        scanf(" %[^\n]", students[i].program);

        printf("Enter faculty :");
        scanf(" %[^\n]", students[i].faculty);
    }

    for (int i = 0; i < numOfStudents; i++)
    {
        for (int j = i + 1; j < numOfStudents; j++)
        {
            if (students[i].rollNo > students[j].rollNo)
            {
                struct st temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    printf("\n\n");

    for (int i = 0; i < numOfStudents; i++)
    {
        printf("\n\nDetails of student %d\n:", i + 1);

        printf("name = %s\n", students[i].name);
        printf("rollNo = %d\n", students[i].rollNo);
        printf("gpa = %.2f\n", students[i].gpa);
        printf("program = %s\n", students[i].program);
        printf("faculty = %s\n", students[i].faculty);
    }

    return 0;
}