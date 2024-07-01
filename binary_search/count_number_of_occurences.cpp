// TC : O(logN)
// SC : O(1)

#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>& nums, int target) {
    int l = 0, h = nums.size() - 1, ans = nums.size();

    while (l <= h) {
        int m = (l + h) / 2;

        if (nums[m] >= target) {
            ans = m;
            h = m - 1;
        } else {
            l = m + 1;
        }
    }

    return ans;
}

int upperBound(vector<int>& nums, int target) {
    int l = 0, h = nums.size() - 1, ans = nums.size();

    while (l <= h) {
        int m = (l + h) / 2;

        if (nums[m] > target) {
            ans = m;
            h = m - 1;
        } else {
            l = m + 1;
        }
    }

    return ans - 1;
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> nums =  {2, 4, 6, 8, 8, 8, 8, 13};
    int target = 8;

    int fidx = lowerBound(nums, target);
    int sidx = upperBound(nums, target);

    cout << "Number of Occurences of " << target << " is ";

    if (fidx == nums.size()) {
        cout << 0 << endl;
    } else {
        cout << sidx - fidx + 1 << endl;
    }
}

