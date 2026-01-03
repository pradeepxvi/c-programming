// function to return a structure

#include <stdio.h>
#include <string.h>

struct Student
{
    char name[100];
    int age;
    float marks;
};

struct Student studentDetails()
{
    struct Student st;

    printf("Enter name:");
    scanf(" %[^\n]", st.name);

    printf("Enter age:");
    scanf(" %d", &st.age);

    printf("Enter marks:");
    scanf(" %f", &st.marks);

    return st;
}

int main()
{

    struct Student st = studentDetails();

    printf("name =  %s\n", st.name);
    printf("age =  %d\n", st.age);
    printf("marks =  %f\n", st.marks);

    return 0;
}