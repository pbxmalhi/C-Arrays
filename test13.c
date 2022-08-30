#include <stdio.h>
void main(){
    int arr[] = {0,1,2,2,1,0,0,2,0,1,1,0};
    int i=0, j=0 , n = 12, temp;
    while (i<12)
    {   int k=i+1;
        while (k<n)
        {
        if (arr[i]> arr[k])
        {
            temp = arr[i];
            arr[i]=arr[k];
            arr[k]=temp;
        }
            k++;
        }
        
        i++;      
    }
    printf("The Sorted array is: ");
    while (j<12)
    {
        printf("%d ", arr[j]);
        j++;
    }
      
}