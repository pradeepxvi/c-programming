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
    struct Student pradeep = {"pradeep kunwar", 10, 3.36, "BCA", "Science and Tech"};

    printf("name = %s\n", pradeep.name);
    printf("rollNo = %d\n", pradeep.rollNo);
    printf("gpa = %.2f\n", pradeep.gpa);
    printf("program = %s\n", pradeep.program);
    printf("faculty = %s\n", pradeep.faculty);

    printf("\n\n");

    struct Student abyss;

    strcpy(abyss.name, "Abhishant Poudel");
    abyss.rollNo = 1;
    abyss.gpa = 3.35;
    strcpy(abyss.program, "BCA");
    strcpy(abyss.faculty, "Science and Tech");

    printf("name = %s\n", abyss.name);
    printf("rollNo = %d\n", abyss.rollNo);
    printf("gpa = %.2f\n", abyss.gpa);
    printf("program = %s\n", abyss.program);
    printf("faculty = %s\n", abyss.faculty);

    return 0;
}