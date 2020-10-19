#include <stdio.h>
#include <stdlib.h>
#define MAX_NAME_LEN 20
#define SUM(stu) (stu.middle+stu.final)
typedef struct Student Student;
struct  Student
{
    char name[MAX_NAME_LEN];
    int snum;
    int middle;
    int final;
    //int total;
};
void Sort(Student* base, int n);
void View(Student* base, int n);
int main()
{
    int n = 0;
    Student* base = 0;
    int i = 0;
 
    printf("How mant student : ");
    scanf("%d", &n);
 
    base = (Student*)malloc(sizeof(Student) * n);
    printf("Enter Student imformation : name middle final\n");
    for (i = 0; i < n; i++)
    {
        printf("%d Student Imformation", i + 1);
        scanf("%d %s %d %d", &base[i].snum, base[i].name, MAX_NAME_LEN, &base[i].middle, &base[i].final);
    }
    Sort(base, n);
    View(base, n);
    free(base);
    return 0;
}
void Sort(Student* base, int n)
{    
    Student temp;
    int i = 0, j = 0;
    for (i = n; i > 1; i--)
    {
        for (j = 1; j < i; j++)
        {
            if (SUM(base[j - 1]) < SUM(base[j]))
            {
                temp = base[j - 1];
                base[j - 1] = base[j];
                base[j] = temp;
            }
        }
    }
 
}
void View(Student* base, int n)
{
    int i= 0;
    printf("%4s| %8s| %4s| %4s| %4s| %s\n", "번호", "이름", "중간", "기말", "합계", "평균");
    for (i = 0; i < n; i++)
    {
        printf("%4d| %8s| %4d| %4d| %4d| %.1f\n",
            base[i].snum, base[i].name, base[i].middle, base[i].final, SUM(base[i]), SUM(base[i]) / 2.0);
    }
}
