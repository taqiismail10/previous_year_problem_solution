#include <stdio.h>

int main()
{
    FILE *t;
    int n;
    scanf("%d", &n);
    int num[n], squared[n];
    char numbers[] = "input_number.txt";
    char numbers1[] = "output_number.txt";

    t = fopen(numbers, "w");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
        fprintf(t, "%d\n", num[i]);
    }
    fclose(t);
    t = fopen(numbers, "r");
    for (int i = 0; i < n; i++)
    {
        fscanf(t, "%d", &num[i]);
        squared[i] = num[i] * num[i];
    }
    fclose(t);
    t = fopen(numbers1, "w");
    for (int i = 0; i < n; i++)
    {
        fprintf(t, "%d\n", squared[i]);
        printf("%d\n", squared[i]);
    }
    fclose(t);
    return 0;
}