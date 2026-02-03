#include <stdio.h>
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return 1;
        }
    }
    return -1;
}
int insert(int arr[], int n, int x, int pos)
{
    if (pos < 0 || pos >= n)
    {
        printf("Not possible");
    }
    for (int i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = x;
    return n + 1;
}
int delete(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
            break;
    }
    if (i == n)
    {
        printf("not possible");
        return n;
    }
    for (int j = i; j <= n - 2; j++)
    {
        arr[j] = arr[j + 1];
    }
    return n - 1;
}
int getmax(int arr[],int n)
{
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    return max;
}
int getsmax(int arr[],int n)
{
    int max=arr[0];
    int smax= -1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            smax=max;
            max=arr[i];
        }
        if(arr[i]<max && arr[i]>smax)
        {
            smax=arr[i];
        }
    }
    return smax;
}
void reverse(int arr[], int n)
{
    int i=0,j=n-1;
    while(i<j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j--;
        i++;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[] = {70, 60, 50, 40, 30, 20, 10};
    // int n = sizeof(arr) / sizeof(arr[0]);
    int n = 7;
    display(arr, n);
    printf("%d\n", search(arr, n, 40));
    // insert(arr,n,55,2);
    // delete(arr, n, 50);
    // display(arr, n);
    printf("%d\n",getmax(arr,n));
    printf("%d\n",getsmax(arr,n));
    reverse(arr,n);

}