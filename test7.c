#include <stdio.h>
void main(){
    int array1[2][2] = {1, 2,
                        3, 4};
    int transArray[2][2];

    int i=0;
    printf("Given Matrix is : \n");
    while (i<2)
    {   
        int j=0;
        while (j<2)
        {
            printf("%d ", array1[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
    i=0;
    while (i<2)
    {
        int j = 0;
        while (j<2)
        {
            transArray[i][j] = array1[j][i];
            j++;
        }
        i++;
    }
    i=0;
    printf("Transposed Matrix is : \n");
    while (i<2)
    {   
        int j=0;
        while (j<2)
        {
            printf("%d ", transArray[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
    
}