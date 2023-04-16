#include <stdio.h>
typedef struct person
{
    char name[100];
    int id;
    float basic_salary;
} per;
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    per p_info[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of the person: \n");
        scanf("%[^\n]s", p_info[i].name);
        printf("Enter the persons id: \n");
        scanf("%d", &p_info[i].id);
        printf("Enter the basic salary: \n");
        scanf("%.2f", &p_info[i].basic_salary);
        getchar();
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of the person: %s\n", p_info[i].name);
        printf("Enter the persons id: %d\n", p_info[i].id);
        printf("Enter the basic salary: %.2f\n", &p_info[i].basic_salary);
    }
}