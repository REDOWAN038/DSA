// TC : O(n)
// SC : O(1)

#include<stdio.h>

int search(int arr[],int n,int target)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target){
            return i;
        }
    }
    
    return -1;
}

int main()
{
    int arr[]={1,2,3,4,5};
    int target = 4;
    int n = sizeof(arr)/sizeof(arr[0]);
    int idx = search(arr,n,target);
    printf("%d",idx);
}