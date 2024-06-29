// TC : O(logN)
// SC : O(1)

#include <bits/stdc++.h>
using namespace std;

int findCeil(vector<int>&arr, int target) {
    int l = 0, h = arr.size(), res = -1;

    while (l <= h) {
        int m = (l + h) / 2;

        if (arr[m] >= target) {
            res = arr[m];
            h -= 1;
        } else {
            l += 1;
        }
    }

    return res;
}

int findFloor(vector<int>&arr, int target) {
    int l = 0, h = arr.size(), res = -1;

    while (l <= h) {
        int m = (l + h) / 2;

        if (arr[m] <= target) {
            res = arr[m];
            l+=1;
        } else {
            h-=1;
        }
    }

    return res;
}

int main() {
    vector<int> arr = {3, 4, 4, 7, 8, 10};
    int target = 5;
    cout << "Ceil : "<< findCeil(arr, target) << endl;
    cout << "Floor : "<< findFloor(arr, target) << endl;

    return 0;
}
