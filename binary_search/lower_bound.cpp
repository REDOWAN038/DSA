// TC : O(logN)
// SC : O(1)

#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>&arr, int target) {
    int l = 0, h = arr.size(), res = arr.size();

    while (l <= h) {
        int m = (l + h) / 2;

        if (arr[m] >= target) {
            res = m;
            h -= 1;
        } else {
            l += 1;
        }
    }

    return res;
}

int main() {
    vector<int> arr = {3, 5, 5, 15, 19};
    int target = 5;
    cout << lowerBound(arr, target) << endl;

    return 0;
}
