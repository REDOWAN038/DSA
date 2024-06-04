// TC : O(n)
// SC : O(1)

#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n) {
  int temp = arr[0];
  for (int i = 0; i < n - 1; i++) {
    arr[i] = arr[i + 1];
  }
  arr[n - 1] = temp; 

}
int main() {
  int arr[]= {1,2,3,4,5};
  int n = sizeof(arr)/sizeof(arr[0]);
  solve(arr, n);
  
  cout << "The array after shifting left by 1 place :  ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

