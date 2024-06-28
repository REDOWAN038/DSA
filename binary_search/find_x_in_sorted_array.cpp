// TC : O(logN)
// SC : O(1)

#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int>&arr, int target) {
    int l = 0, h = arr.size() - 1;

    while (l <= h) {
        int m = (l + h) / 2;

        if (arr[m] == target) {
            return m;
        } else if (arr[m] > target) {
            h = m - 1;
        } else {
            l = m + 1;
        }
    }

    return -1;
}

int main() {
    vector<int> arr = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 1;
    cout << binary_search(arr, target) << endl;

    return 0;
}
