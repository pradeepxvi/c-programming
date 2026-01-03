// passing structure as arguments in function....
#include <stdio.h>
struct Student
{
    char name[100];
    int age;
    float marks;
};

void studentDetails(struct Student st)
{
    printf("name =  %s\n", st.name);
    printf("age =  %d\n", st.age);
    printf("marks =  %f\n", st.marks);
}

int main()
{
    struct Student st;

    printf("Enter name :");
    scanf(" %[^\n]", st.name);

    printf("Enter roll no :");
    scanf(" %d", &st.age);

    printf("Enter gpa :");
    scanf(" %f", &st.marks);

    studentDetails(st);
    return 0;
}