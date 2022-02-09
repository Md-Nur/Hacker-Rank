// Programm name: Complex Pattern

#include <stdio.h>

int main()
{
    int n, max, col, row, min;
    scanf("%d", &n);
    max = 2 * n - 1;

    for (int i = 1; i <= max; i++)
    {
        row = i;
        for (int j = 1; j <= max; j++)
        {
            col = j;
            if (i > n)
            {
                row = 2 * n - i;
            }
            if (j > n)
            {
                col = 2 * n - j;
            }
            min = (row < col) ? row : col;
            printf("%d ", n-min+1);
        }
        printf("\n");
    }

    return 0;
}

