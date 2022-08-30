#include <stdio.h>
void main(){
    int i=0, n, temp;
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
    printf("\nEnter the index no. of array to be deleted : ");
    scanf("%d", &k);
    k = k-1;
    temp = arr1[k];
    arr1[k] = arr1[n-1];
    arr1[n-1] = temp;
    
    int x = n-1;
    arr1[x];
    int j=0;
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
    printf("The Sorted array after deleting element at given index is: ");
    while (j<x)
    {
        printf("%d ", arr1[j]);
        j++;
    }
}