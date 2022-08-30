#include <stdio.h>
void main()
{
    int i = 0, n, k = 0, duplicate = 0;
    printf("Enter the value of n (nos. to be entered) : ");
    scanf("%d", &n);
    printf("\n");
    int arr1[n];
    int sum = 0;

    printf("Enter %d arrays.\n", n);
    while (i < n)
    {
        scanf("%d", &arr1[i]);
        i++;
    }
    printf("Entered Array is : ");
    while (k < n)
    {
        printf("%d, ", arr1[k]);
        k++;
    }
    printf("\n");
    i = 0;
    int j = 0, temp;
    while (i < n)
    {
        int k = i + 1;
        while (k < n)
        {
            if (arr1[i] > arr1[k])
            {
                temp = arr1[i];
                arr1[i] = arr1[k];
                arr1[k] = temp;
            }
            k++;
        }

        i++;
    }
    // printf("The Sorted array is: ");
    // while (j<n)
    // {
    //     printf("%d ", arr1[j]);
    //     j++;
    // }
    i = 0;
    k = 0;
    int x = 0;
    while (i < n)
    {
        k = i;
        duplicate = 0;
        while (k < n)
        {
            if (arr1[i] == arr1[k])
            {
                duplicate++;
            }
            else
            {
                x = i;
                i = k - 1;
                k = n;
            }
            k++;
        }
        if (k == n)
        {
            x = i;
            i = k - 1;
        }
        if (duplicate % 2 == 1)
        {
            printf("\n%d occurs odd times", arr1[x]);
        }

        i++;
    }
}