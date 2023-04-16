#include <stdio.h>
int main()
{
    FILE *n;
    char input[] = "out.txt";
    int integers[100];
    n = fopen(input, "w");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &integers[i]);
        fprintf(n, "%d ", integers[i]);
    }
    fclose(n);
    n = fopen(input, "r");

    for (int i = 0; i < 10; i++)
    {
        if (integers[i] % 2 != 0)
        {
            printf("%d\n", integers[i]);
        }
    }

    fclose(n);
    return 0;
}