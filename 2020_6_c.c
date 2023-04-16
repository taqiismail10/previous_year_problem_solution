#include <stdio.h>
typedef struct student
{
    int stdid;
    char name[100];
    double gpa;

} std;

int main()
{
    FILE *n;
    char input[] = "input.txt";
    int z;
    scanf("%d", &z);
    std student[z];

    n = fopen(input, "w");
    for (int i = 0; i < z; i++)
    {
        scanf("%d %s %lf", &student[i].stdid, student[i].name, &student[i].gpa);
        fprintf(n, "%d\t %s\t %.2lf\n", student[i].stdid, student[i].name, student[i].gpa);
    }
    fclose(n);
    n = fopen(input, "r");
    for (int i = 0; i < z; i++)
    {
        fscanf(n, "%d %s %lf", &student[i].stdid, student[i].name, &student[i].gpa);
        printf("std id-> %d\t std name-> %s\t std gpa %.2lf\n", student[i].stdid, student[i].name, student[i].gpa);
        // fprintf(n, "%d %s %d", &student->stdid, student->name, &student->gpa);
    }

    fclose(n);
    return 0;
}