// TC : O(n)
// SC : O(1)

#include<bits/stdc++.h>
using namespace std;

int secondSmallest(int arr[],int n)
{
    if(n<2){
        return -1;
    }

    int small = INT_MAX;
    int second_small = INT_MAX;
    
    for(int i = 0; i < n; i++) 
    {
       if(arr[i] < small)
       {
          second_small = small;
          small = arr[i];
       }
       else if(arr[i] < second_small && arr[i] != small)
       {
          second_small = arr[i];
       }
    }

   return second_small;     
}

int main() {
    int arr[]={1,2,4,7,7,5};  
    int n=sizeof(arr)/sizeof(arr[0]);
    int second_small=secondSmallest(arr,n);
    cout<<"Second smallest is "<<second_small<<endl;
    return 0;
}


