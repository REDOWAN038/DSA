// TC : O(n)
// SC : O(1)

#include <bits/stdc++.h>
using namespace std;

int findSmallestElement(int arr[], int n) {
  int min = arr[0];
  for (int i = 0; i < n; i++) {
    if (arr[i]<min) {
      min = arr[i];
    }
  }
  return min;
}

int main() {
  int arr1[] = {2,10,9,3,11};
  int n = sizeof(arr1)/sizeof(arr1[0]);
  int min = findSmallestElement(arr1, n);
  cout << "The smallest element in the array is: " << min << endl;
 
  int arr2[] =  {8,12,9,7,4};
  n = sizeof(arr2)/sizeof(arr2[0]);
  min = findSmallestElement(arr2, n);
  cout << "The largest element in the array is: " << min<<endl;
  return 0;
}


