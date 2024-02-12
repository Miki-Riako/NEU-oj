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
void print(info *student, int number);

int main(void)
{
    int N;
    scanf("%d", &N);
    info *student = malloc(N * sizeof(info));
    for (int i = 0; i < N; i++)
    {
        input(&student[i]);
    }
    print(student, N);
}

void input(info *student)
{
    scanf("%s %s %d %d %d", student->number, student->name, &student->gradeA, &student->gradeB, &student->gradeC);
}

void print(info *student, int number)
{
    int sumA = 0;
    int sumB = 0;
    int sumC = 0;
    int sum[number];
    for (int i = 0; i < number; i++)
    {
        sumA += student[i].gradeA;
        sumB += student[i].gradeB;
        sumC += student[i].gradeC;
    }
    for (int i = 0; i < number; i++)
    {
        sum[i] = student[i].gradeA + student[i].gradeB + student[i].gradeC;
    }
    int max = sum[0];
    for (int i = 0; i < number; i++)
    {
        if (sum[i] > max)
        {
            max = sum[i];
        }
    }
    printf("%d %d %d\n", sumA / number, sumB / number, sumC / number);
    for (int i = 0; i < number; i++)
    {
        if (sum[i] == max)
        {
            printf("%s %s %d %d %d\n", student[i].number, student[i].name, student[i].gradeA, student[i].gradeB, student[i].gradeC);
            return;
        }
    }
}
