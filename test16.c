#include <stdio.h>
void main(){
    int i = 0, n = 10, k = 0, duplicate=0;
    int countArray[10][2];
    int arr1[n];
        int sum = 0;

    printf("Enter %d arrays.\n", n);
    while (i<n)
    {
        scanf("%d", &arr1[i]);
        i++;
    }
    printf("Entered Array is : ");
    while (k<n)
    {
        printf("%d, ", arr1[k]);
        k++;
    }
    printf("\n");
    i=0;
    int j=0, temp;
    while (i<n)
    {   int k=i+1;
        while (k<n)
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
    i=0;
    k=0;
    int v = 0;
    int x = 0;
    while (i<n)
    {
        k=i;
        duplicate=0;
        while (k<n)
        {
            if (arr1[i] == arr1[k])
            {
                duplicate++;
            }
            else{
                x=i;
                i=k-1;
                k=n;
            }
            k++;
        }
        if (k==n)
        {
            x=i;
            i=k-1;
        }
        countArray[v][0] = arr1[x];
        countArray[v][1] = duplicate;
        i++;  
        v++; 
    }
    printf("\n");
    // i = 0;
    // while (i<v)
    // {
    //     int j=0;
    //     while (j<2)
    //     {
    //         printf("%d ", countArray[i][j]);
    //         j++;
    //     }
    //     printf("\n");
    //     i++;        
    // }
    i=0;
    while (i<1)
    {
        int j = 0;
        while (j<v)
        {
            if (countArray[j][1]>=countArray[i][1])
            {
                i = j;
            }
            j++;
        }
        i++;
    }
    int index = i-1;
    printf("The majority of the Element : %d", countArray[index][0]);
}