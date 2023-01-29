#include<stdio.h>
#include<string.h>

struct student
{
    int student_roll;
    char name[100];
    float student_marks;
};

void studentinput(struct student* s, int n)
{
    int i;

    for (i = 0;i < n;i++)
    {
        printf("\nEnter students roll :: ");
        scanf("%d", &s->student_roll);

        printf("\nEnter students name :: ");
        scanf("%s", &s->name);

        printf("\nEnter students marks :: ");
        scanf("%f", &s->student_marks);
        s++;
        printf("\n");
    }
}

void studentoutput(struct student* s, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nNumber of students :: %d\n", i + 1);
        printf("\nStudents roll :: %d\n", s->student_roll);
        printf("\nstudents name :: %s\n", s->name);
        printf("\nStudents marks :: %f\n", s->student_marks);

        s++;
    }
}
int main()
{
    struct student student[100];
    int n;
    printf("Enter number of students :: ");
    scanf("%d", &n);
    studentinput(student, n);
    studentoutput(student, n);
    return 0;
}