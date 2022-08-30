#include <stdio.h>
void main(){
    int i = 0, n = 10, temp;
    int array[] = {2, 5, 7, 0, 4, 0, 7, -5, 8, 0};
    while (i<n)
    {
        int j = 9;
        while (j>=0)
        {
            if (array[i] == 0 && array[j]!=0 && i<j)
            {
                temp = array[i];
                array[i] = array[j];
                array[j]= temp;
            }
            else if (array[i]!=0)
            {
                j = -1;
            }
            
            j--;
        }
        i++;
    }
    i=0;
    while (i<n)
    {
        printf("%d ", array[i]);
        i++;
    }
    
}