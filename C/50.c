#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char number[20];
    char name[20];
    int gradeA;
    int gradeB;
    int gradeC;
}
info;

void input(info *student);
void print(info *student);

int main(void)
{
    int N;
    scanf("%d", &N);
    info *student = malloc(N * sizeof(info));
    for (int i = 0; i < N; i++)
    {
        input(&student[i]);
    }
    for (int i = 0; i < N; i++)
    {
        print(&student[i]);
    }
}

void input(info *student)
{
    scanf("%s %s %d %d %d", student->number, student->name, &student->gradeA, &student->gradeB, &student->gradeC);
}

void print(info *student)
{
    printf("%s,%s,%d,%d,%d\n", student->number, student->name, student->gradeA, student->gradeB, student->gradeC);
}
