#include <stdio.h>
void main(){
    int i=0, n, odd = 0, even = 0;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    int arr1[n];
    printf("Enter %d elements of an array : ", n);
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
    while (i<n)
    {
        if (arr1[i]%2 == 0)
        {
            even++;
        }
        else if (arr1[i]%2 == 1)
        {
            odd++;
        }
        i++;
    }
    printf("\nThe even element(s) are : %d\n", even);
    printf("The odd element(s) are : %d\n", odd);
    int oddArray[odd];
    int evenArray[even];
    i=0;
    int k = 0, z = 0;
    while (i<n)
    {
        if (arr1[i]%2 == 0)
        {
            evenArray[k] = arr1[i];
            k++;
        }
        else if (arr1[i]%2 == 1)
        {
            oddArray[z] = arr1[i];
            z++;
        }
        i++;
    }
    k=0;
    z=0;
    printf("\nThe even array is : ");
    while (k<even)
    {
        printf("%d ", evenArray[k]);
        k++;
    }
    printf("\nThe odd array is : ");
    while (z<odd)
    {
        printf("%d ", oddArray[z]);
        z++;
    }
}