#include <stdio.h>
void main()
{
    int n = 3;
    int array1[n][n];
    int array2[n][n];
    int i = 0;
    printf("Enter the elements in first %d by %d Matrix :", n, n);
    while (i < n)
    {
        int j = 0;
        while (j < n)
        {
            scanf("%d", &array1[i][j]);
            j++;
        }
        i++;
    }
    i = 0;
    printf("Enter the elements in second %d by %d Matrix :", n, n);
    while (i < n)
    {
        int j = 0;
        while (j < n)
        {
            scanf("%d", &array2[i][j]);
            j++;
        }
        i++;
    }
    i = 0;
    int j = 0;
    while (i < n)
    {
        j = 0;
        while (j < n)
        {
            if (array1[i][j] != array2[i][j])
            {
                printf("Matrices are not equal.");
                j = n;
                i = n;
                break;
            }

            j++;
        }
        i++;
    }
    if (i == n && j == n)
    {
        printf("Matrices are equal.");
    }
}