#include <stdio.h>
#include <string.h>

union st
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

    union st students[numOfStudents];

    for (int i = 0; i < numOfStudents; i++)
    {

        printf("Enter name :");
        scanf(" %[^\n]", students[i].name);
        printf("name = %s\n", students[i].name);

        printf("Enter roll no :");
        scanf(" %d", &students[i].rollNo);
        printf("rollNo = %d\n", students[i].rollNo);

        printf("Enter gpa :");
        scanf(" %f", &students[i].gpa);
        printf("gpa = %.2f\n", students[i].gpa);

        printf("Enter program :");
        scanf(" %[^\n]", students[i].program);
        printf("program = %s\n", students[i].program);

        printf("Enter faculty :");
        scanf(" %[^\n]", students[i].faculty);
        printf("faculty = %s\n", students[i].faculty);

        printf("\n\n");
    }

    return 0;
}