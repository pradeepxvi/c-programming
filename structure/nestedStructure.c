// demonstrate nested structure..
// ask user details and display it..
#include <stdio.h>

struct Location
{
    char country[100];
    char state[100];
    char city[100];
    int postalCode;
};

struct Education
{
    char course[100];
    int duration;
    float gpa;
};

struct Occupation
{
    char organization[100];
    int employee_id;
    float salary;
};

struct Human
{
    char name[100];
    struct Location location;
    struct Education education;
    struct Occupation occupation;
};

int main()
{

    struct Human abyss;

    printf("Enter name:");
    scanf(" %[^\n]", abyss.name);

    printf("\n\nEnter education details....\n");
    printf("Cours name:");
    scanf(" %[^\n]", abyss.education.course);

    printf("Course Duration:");
    scanf(" %d", &abyss.education.duration);

    printf("Last GPA:");
    scanf(" %f", &abyss.education.gpa);

    printf("\n\nEnter occuptaion details....\n");
    printf("organization name:");
    scanf(" %[^\n]", abyss.occupation.organization);

    printf("Employee id:");
    scanf(" %d", &abyss.occupation.employee_id);

    printf("Salary:");
    scanf(" %f", &abyss.occupation.salary);

    printf("\n\nEnter location details....\n");
    printf("country:");
    scanf(" %[^\n]", abyss.location.country);

    printf("state:");
    scanf(" %[^\n]", abyss.location.state);

    printf("city:");
    scanf(" %[^\n]", abyss.location.city);

    printf("postal code:");
    scanf(" %d", &abyss.location.postalCode);

    printf("\n\n\n");
    printf("%s's details.....\n", abyss.name);

    printf("name =  %s\n", abyss.name);

    printf("course =  %s\n", abyss.education.course);
    printf("duration =  %d\n", abyss.education.duration);
    printf("GPA =  %.2F\n", abyss.education.gpa);

    printf("organization =  %s\n", abyss.occupation.organization);
    printf("employee id =  %d\n", abyss.occupation.employee_id);
    printf("salary =  %.2F\n", abyss.occupation.salary);

    printf("country =  %s\n", abyss.location.country);
    printf("state =  %s\n", abyss.location.state);
    printf("city =  %s\n", abyss.location.city);
    printf("postal code =  %d\n", abyss.location.postalCode);

    return 0;
}
