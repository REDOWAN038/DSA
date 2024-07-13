// TC : O(N)
// SC : O(N)

class Solution {
  public:
    vector<int> leaders(int n, int arr[]) {
        vector<int>res;
        int maxx=0;
        
        for(int i=n-1;i>=0;i--){
            if(arr[i]>=maxx){
                res.push_back(arr[i]);
                maxx = arr[i];
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};