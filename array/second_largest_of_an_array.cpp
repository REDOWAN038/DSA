// TC : O(n)
// SC : O(1)

#include<bits/stdc++.h>
using namespace std;

int secondLargest(int arr[],int n)
{
	if(n<2){
        return -1;
    }
	
    int large=INT_MIN,second_large=INT_MIN;

    for (int i = 0; i < n; i++) 
    {
        if (arr[i] > large) 
        {
            second_large = large;
            large = arr[i];
        }
 
        else if (arr[i] > second_large && arr[i] != large) 
        {
            second_large = arr[i];
        }
    }

    return second_large;                
}

int main() {
    int arr[]={1,2,4,7,7,5};  
    int n=sizeof(arr)/sizeof(arr[0]);
    int second_large=secondLargest(arr,n);
    cout<<"Second largest is "<<second_large<<endl;
    return 0;
}


