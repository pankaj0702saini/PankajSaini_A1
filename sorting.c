#include <stdio.h>

void display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
// Programm of bubble sort
void bubble_sort(int *arr, int size)
{
    printf("Running bubble sort...\n");
    for (int i = 0; i < size - 1; i++) // number of passes
    {   
        // int isSorted=0; 
        for (int j = 0; j < size - 1 - i; j++) // number of comperision in one pass
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                // isSorted++; // We do this to make bubble sort adaptive
            }
        }
        // if(isSorted==0)
        //     return;
    }
}

// Programm of selection sort
void selection_sort(int *arr,int n)
{
    printf("Running selection sort...\n");
    int IndexOfMin,temp;
    for(int i=0;i<n-1;i++)
    {
        IndexOfMin=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[IndexOfMin])
            {
                IndexOfMin=j;
            }
        }
        // Swap
        temp=arr[i];
        arr[i]=arr[IndexOfMin];
        arr[IndexOfMin]=temp;
    }
}

int main()
{
    int arr[] = {11, 3, 5, 15, 7, 19};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr, n);
    // bubble_sort(arr, n); // Program of bubble sort array
    selection_sort(arr,n);  // Program of selection sort array
    display(arr, n);  // sorted array
}