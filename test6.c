#include <stdio.h>
void main(){
    int array1[2][2] = {1, 2,
                        3, 4};
    int array2[2][2] = {5, 6,
                        7, 8};
    int multiArray[2][2];

    int i=0;
    while (i<2)
    {
        int j = 0;
        while (j<2)
        {
        int k = 0;
        multiArray[i][j] = 0;
            while (k<2)
            {
                multiArray[i][j] = multiArray[i][j] + array1[i][k] * array2[k][j];
                k++;
            }
            j++;
        }
        i++;
    }
    i=0;
    while (i<2)
    {   
        int j=0;
        while (j<2)
        {
            printf("%d ", multiArray[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
    
}