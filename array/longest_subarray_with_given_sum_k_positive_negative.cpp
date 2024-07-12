// TC : O(N)
// SC : O(N)

class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        unordered_map<long long,int>mp;
        int res=0;
        long long sum=0;
        
        for(int i=0;i<N;i++){
            sum+=A[i];
            
            if(sum==K){
                res = i+1;
            }
            
            int rem = sum-K;
            
            if(mp.find(rem)!=mp.end()){
                res = max(res,i-mp[rem]);
            }
            
            if(mp.find(sum)==mp.end()){
                mp[sum] = i;
            }
        }
        
        return res;
    } 

};