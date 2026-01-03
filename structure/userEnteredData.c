#include <stdio.h>
#include <string.h>

struct Student
{
    char name[100];
    int rollNo;
    float gpa;
    char program[100];
    char faculty[100];
};
int main()
{
    struct Student pradeep;

    printf("Enter name :");
    scanf(" %[^\n]", pradeep.name);

    printf("Enter roll no :");
    scanf(" %d", &pradeep.rollNo);

    printf("Enter gpa :");
    scanf(" %f", &pradeep.gpa);

    printf("Enter program :");
    scanf(" %[^\n]", pradeep.program);

    printf("Enter faculty :");
    scanf(" %[^\n]", pradeep.faculty);

    printf("name = %s\n", pradeep.name);
    printf("rollNo = %d\n", pradeep.rollNo);
    printf("gpa = %.2f\n", pradeep.gpa);
    printf("program = %s\n", pradeep.program);
    printf("faculty = %s\n", pradeep.faculty);

    return 0;
}