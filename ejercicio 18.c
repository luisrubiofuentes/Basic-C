#include <stdio.h>

int main()
{

    int lineas = 0;

    printf("Lineas? ");
    scanf("%d", &lineas);
    for (int i = 1; i <= lineas; i++){
        for (int j = 1; j < (lineas - i + 1); j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%d ", k);
        }
        for (int t = i - 1; t >= 1; t-- )
        {
            printf("%d ", t);
        }
        printf("\n");
    }
}
