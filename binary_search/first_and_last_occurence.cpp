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
    vector < int > nums = {3, 4, 13, 13, 13, 20, 40};
    int target = 13;

    int fidx = lowerBound(nums, target);
    int sidx = upperBound(nums, target);

    cout << "First Occurence Index : ";

    if (fidx < nums.size() && nums[fidx] == target) {
        cout << fidx << endl;
    } else {
        cout << -1 << endl;
    }

    cout << "Last Occurence Index : ";

    if (sidx >= 0 && nums[sidx] == target) {
        cout << sidx << endl;
    } else {
        cout << -1 << endl;
    }
}

