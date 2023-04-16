#include <stdio.h>
typedef struct person
{
    char name[100];
    char d_o_j[10];
    float basic_salary;
} per;
int main()
{
    
    per p_info;

 
        printf("Enter the name of the person: \n");
        scanf("%[^\n]s", p_info.name);
        getchar();
        printf("Enter the persons date of joining: \n");
        scanf("%[^\n]s", p_info.d_o_j);
        getchar();
        printf("Enter the basic salary: \n");
        scanf("%.2f", &p_info.basic_salary);
        //getchar();
 


        printf("Enter the name of the person: %s\n", p_info.name);
        printf("Enter the persons date of joining: %s\n", p_info.d_o_j);
        printf("Enter the basic salary: %.2f\n", p_info.basic_salary);
    
}