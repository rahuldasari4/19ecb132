#include <stdio.h>
main()
{
    int rows, space, i, j, k, l, m, n = 0;
    printf("enter the number of rows \n");
    // scanf("%d", &rows);
    rows=5;
    for (i = 1; i <= rows; i++)
    {
        for (space = i; space < rows; space++)
        {
            printf("  ");
        }
        for (j = 1; j <= (2 * (i - 1) + 1); j++)
        {
            printf("* ");
        }
        printf("\n");
    }


    for (k = rows-2; k >= 0; k--)
    {
        for (n = 1; n <=rows-k-1; n++)
        {
            printf("  ");
        }
        for (l = 2 * k + 1; l > 0; l--)
        {
            printf("* ");
        }
        printf("\n");
    }
}
