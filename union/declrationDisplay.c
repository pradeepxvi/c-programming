#include <stdio.h>
#include <string.h>

union Student
{
    char name[100];
    int rollNo;
    float gpa;
    char program[100];
    char faculty[100];
};
int main()
{
    union Student pradeep;

    strcpy(pradeep.name, "Abhishant Poudel");
    printf("name = %s\n", pradeep.name);

    pradeep.rollNo = 1;
    printf("rollNo = %d\n", pradeep.rollNo);

    pradeep.gpa = 3.35;
    printf("gpa = %.2f\n", pradeep.gpa);

    strcpy(pradeep.program, "BCA");
    printf("program = %s\n", pradeep.program);

    strcpy(pradeep.faculty, "Science and Tech");
    printf("faculty = %s\n", pradeep.faculty);

    printf("\n\n");

    union Student abyss;

    strcpy(abyss.name, "Abhishant Poudel");
    printf("name = %s\n", abyss.name);

    abyss.rollNo = 1;
    printf("rollNo = %d\n", abyss.rollNo);

    abyss.gpa = 3.35;
    printf("gpa = %.2f\n", abyss.gpa);

    strcpy(abyss.program, "BCA");
    printf("program = %s\n", abyss.program);

    strcpy(abyss.faculty, "Science and Tech");
    printf("faculty = %s\n", abyss.faculty);

    return 0;
}