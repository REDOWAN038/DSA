// TC : O(n)
// SC : O(1)

#include <iostream>
using namespace std;

void Reverse(int arr[], int start, int end)
{
  while (start <= end)
  {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

void rotateRight(int arr[], int n, int k)
{
  Reverse(arr, 0, n - k - 1);
  Reverse(arr, n - k, n - 1);
  Reverse(arr, 0, n - 1);
}

void rotateLeft(int arr[], int n, int k)
{
  Reverse(arr, 0, k - 1);
  Reverse(arr, k, n - 1);
  Reverse(arr, 0, n - 1);
}

int main()
{
  int arr1[] = {1, 2, 3, 4, 5, 6, 7};
  int n = 7;
  int k = 2;
  rotateRight(arr1, n, k);
  cout << "After Rotating the k elements to right : ";
  for (int i = 0; i < n; i++)
    cout << arr1[i] << " ";
  cout << endl;

  int arr2[] = {5, 8, 4, 11, 9, 1, 2};
  int n = 7;
  int k = 2;
  rotateLeft(arr2, n, k);
  cout << "After Rotating the k elements to left : ";
  for (int i = 0; i < n; i++)
    cout << arr2[i] << " ";
  cout << endl;
  return 0;
}