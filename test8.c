#include <stdio.h>
void main(){
    int n = 2;
    int array1[2][2] = {1, 2,
                        3, 4};
    int transArray[n][n];

    int i=0;
    printf("Given Matrix is : \n");
    while (i<n)
    {   
        int j=0;
        while (j<n)
        {
            printf("%d ", array1[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
    i=0;
    int sum = 0;
    while (i<n)
    {
        int j = 0;
        while (j<n)
        {
            if (i == 0 && j==0 || i == n-1 && j== n-1)
            {
                
                sum = sum + array1[i][j];
            }
            
            j++;
        }
        i++;
    }
    i=0;
    printf("The sum of right diagonal of Matrix is : %d\n", sum);
    
}