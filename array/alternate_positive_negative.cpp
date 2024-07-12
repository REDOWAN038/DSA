// TC : O(N)
// SC : O(N)
// Leetcode 2149

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>res(nums.size());
        int l=0,r=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                res[l] = nums[i];
                l+=2;
            }else{
                res[r] = nums[i];
                r+=2;
            }
        }

        return res;
    }
};