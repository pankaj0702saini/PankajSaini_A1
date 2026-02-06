#include<stdio.h>

int search(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            return i;
        }
    }
    return -1;
}
int bsearch(int arr[],int n,int x)
{
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(high+low)/2;
        if(arr[mid] == x)
        {    return mid;
        }
        else if(x>arr[mid])
        {
            low= mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return -1;
}
int bsearch_rec(int arr[],int n,int x,int low,int high)
{
    if(low>high)
    {
        return -1;
    }
    int mid=(low+high)/2;
    if(arr[mid]==x){
        return mid;
    }
    else if(arr[mid]<x)
    {
        return bsearch_rec(arr,n,x,mid+1,high);
    }
    else{
        return bsearch_rec(arr,n,x,low,mid-1);
    }
}
int bsearch_f(int arr[],int n,int x)
{
    int low=0;
    int high=n-1;
    while(low <= high)
    {
        int mid=(low+high)/2;
        if(x>arr[mid])
        {
            low=mid+1;
        }
        else if(x<arr[mid])
        {
            high=mid-1;
        }
        else 
        {
            if(arr[mid] !=arr[mid-1] || mid==0)
            {
                return mid;
            }
            high=mid-1;
        }
    }
    return -1;
}
int main()
{
    int arr[]={1,1,2,2,2,3,3,3,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    // printf("%d\n",search(arr,n,60));
    // printf("%d\n",bsearch(arr,n,60));
    // 
    // printf("%d\n",bsearch_rec(arr,n,60,0,n-1));
    printf("%d\n",bsearch_f(arr,n,3));



}