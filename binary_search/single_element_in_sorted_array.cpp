// TC : O(logN)
// SC : O(1)

#include <bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();

        if(n==1){
            return nums[0];
        }
        
        int l=0,r=n-1;

        while(l<=r){
            int m = l+(r-l)/2;

            if(m==0){
                if(nums[m]!=nums[m+1]){
                    return nums[m];
                }else{
                    l = m+1;
                }
            }

            if(m==n-1){
                if(nums[m]!=nums[m-1]){
                    return nums[m];
                }else{
                    r = m-1;
                }
            }

            if(nums[m]!=nums[m-1] && nums[m]!=nums[m+1]){
                return nums[m];
            }

            if(nums[m]==nums[m+1]){
                m+=1;
            }

            int ls = m-l+1;
            int rs = r-m;

            if(ls%2){
                r = m-1;
            }else{
                l = m+1;
            }
        }

        return nums[l];
}

int main()
{
    vector<int> nums = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    int ans = singleNonDuplicate(nums);
    cout << "The single element is: " << ans << "\n";
    return 0;
}