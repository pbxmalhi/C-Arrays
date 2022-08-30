#include <stdio.h>
void main(){
    int array[5][5] = {0, 1, 0, 1, 1,
                       1, 1, 1, 1, 1, 
                       1, 0, 0, 1, 0,
                       0, 0, 0, 0, 0, 
                       1, 0, 0, 0, 1};
    int maxArray[5];
    int i =0, n=5;
    while (i<5)
    {   int duplicate = 0;
        int j = 0;
        while (j<5)
        {
            if (array[i][j] == 1)
            {
                duplicate ++;
            }
            j++;
        }
        maxArray[i] = duplicate;
        i++;        
    }
    i = 0;
    int index = -1;
    while (i<1)
    {
        int j = 0;
        while (j<n)
        {
            if (maxArray[j]>=maxArray[i])
            {
                i = j; 
            }
            j++;
        }
        i++;
    }
    index = i-1;
    printf("The index of row with maximum 1s is : %d", index);
    
}