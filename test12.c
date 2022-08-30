#include <stdio.h>
void main(){
    int i=0, n=9;
    printf("The numbers from 1 to 9 in an array with no duplicate number : ");
    int array[n];
    while (i<n-1)
    {
        scanf("%d", &array[i]);
        i++;
    }
    i=1;
    while (i<=n)
    {
        int j=0;
        while (j<n-1)
        {
            if (i == array[j])
            {
                j= 2*n;
            }
            j++;
        }
        if (j==n-1)
        {
            printf("%d is missing.\n", i);
        }
        
        i++;
    }
    
    
}