#include <stdio.h>
void main(){
    int n = 2;
    int array1[n][n];
    int i=0;
    printf("Enter the elements in first 2 by 2 Matrix :");
    while (i<n)
    {   
        int j=0;
        while (j<n)
        {
            scanf("%d", &array1[i][j]);
            j++;
        }
        i++;
    }
    i=0;
    int j=0;
    while (i<n)
    {
        int sum = 0;
        j = 0;
        while (j<n)
        {
            sum = sum + array1[i][j];
            printf("%d ",array1[i][j]);
            j++;
        }
        printf("= %d", sum);
        printf("\n");
        i++;
    }   
}