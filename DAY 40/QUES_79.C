// Q79: Perform diagonal traversal of a matrix.
/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9
*/
#include <stdio.h>

int main(void)
{
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int mat[rows][cols];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    int first = 1;

    for (int diag = 0; diag <= rows + cols - 2; diag++)
    {
        if (diag % 2 == 0)
        {
            int r = (diag < rows) ? diag : rows - 1;
            int c = diag - r;

            while (r >= 0 && c < cols)
            {
                if (!first)
                    printf(" ");
                printf("%d", mat[r][c]);
                first = 0;
                r--;
                c++;
            }
        }
        else
        {
            int r = (diag < cols) ? 0 : diag - cols + 1;
            int c = diag - r;

            while (r < rows && c >= 0)
            {
                if (!first)
                    printf(" ");
                printf("%d", mat[r][c]);
                first = 0;
                r++;
                c--;
            }
        }
    }

    printf("\n");
    return 0;
}

