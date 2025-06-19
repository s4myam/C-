#include <stdio.h>

int main()
{
    int r, c, i, j;

    printf("This code is run by Samyam Humagain\n");

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c], b[r][c], join[r][c], meet[r][c];

    printf("Enter elements of Matrix A (only 0 or 1):\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of Matrix B (only 0 or 1):\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Performing Join and Meet
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            join[i][j] = a[i][j] || b[i][j]; // Join (OR)
            meet[i][j] = a[i][j] && b[i][j]; // Meet (AND)
        }
    }

    printf("Matrix A:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    printf("Join Matrix (A OR B):\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", join[i][j]);
        }
        printf("\n");
    }

    printf("Meet Matrix (A AND B):\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", meet[i][j]);
        }
        printf("\n");
    }

    return 0;
}
