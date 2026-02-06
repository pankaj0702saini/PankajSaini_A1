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
int main()
{
    int arr[]={70,60,40,30,20,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",search(arr,n,60));

}