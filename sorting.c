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
int main()
{
    int arr[] = {11, 3, 5, 15, 7, 19};
    int n = 6;
    display(arr, n);
    bubble_sort(arr, n); // Program of bubble sort array
    display(arr, n);  // sorted array
}