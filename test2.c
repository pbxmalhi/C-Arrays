#include <stdio.h>
void main(){
    int i=0, n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    int arr1[n];
    printf("Enter %d elements of an array in ascending order : ", n);
    while (i<n)
    {
        scanf("%d", &arr1[i]);
        i++;
    }
    printf("\nThe entered array is : ");
    i = 0;
    while (i<n)
    {
        printf("%d ", arr1[i]);
        i++;
    }
    i=0;
    int k;
    printf("\nEnter the no. of new value(s) to be added : ");
    scanf("%d", &k);
    i = n;
    int x = n+k;
    arr1[x];
    printf("Enter %d new element(s) in an array : ", k);
    while (i<x)
    {
        scanf("%d", &arr1[i]);
        i++;
    }
    int j=0 , temp;
    i=0;
    while (i<x)
    {   int k=i+1;
        while (k<x)
        {
        if (arr1[i]> arr1[k])
        {
            temp = arr1[i];
            arr1[i]=arr1[k];
            arr1[k]=temp;
        }
            k++;
        }
        
        i++;      
    }
    printf("The Sorted array is: ");
    while (j<x)
    {
        printf("%d ", arr1[j]);
        j++;
    }
}