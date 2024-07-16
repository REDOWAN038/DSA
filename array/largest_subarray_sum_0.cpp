// TC : O(N)
// SC : O(N)

class Solution {
  public:
    int maxLen(vector<int>& arr, int n) {
        // Your code here
        int sum=0,res=0;
        unordered_map<int,int>mp;
        
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==0){
                res = i+1;
            }else{
                if(mp.find(sum)!=mp.end()){
                    res = max(res,i-mp[sum]);
                }else{
                    mp[sum]=i;
                }
            }
        }
        
        return res;
    }
};