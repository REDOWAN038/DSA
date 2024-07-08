// TC : O(logN)
// SC : O(1)

#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
    int n=nums.size();
    int l=0,h=n-1;

    while(l<=h){
        int m = (l+h)/2;

        if(nums[m]==target){
            return m;
        }

        if(nums[l]==nums[m] && nums[h]==nums[m]){
            l+=1;
            h-=1;
            continue;
        }

        if(nums[l]<=nums[m]){
            if(target>=nums[l]&&target<=nums[m]){
                h=m-1;
            }else{
                l=m+1;
            }
        }

        else{
            if(nums[m]<=target && target<=nums[h]){
                l=m+1;
            }else{
                h=m-1;
            }
        }
    }

    return -1;
}

int main()
{
    vector<int> nums = {7, 8, 1, 2, 3, 3, 3, 4, 5, 6};
    int target = 3;
    cout<<search(nums, target)<<endl;
    return 0;
}