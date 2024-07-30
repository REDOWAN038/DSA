// TC : O(logn)
// SC : O(1)

class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here   
        int l=1,h=x;
        while(l<=h){
            long long int m = (l+h)/2;
            long long int val = m*m;
            if(val==x){
                return m;
            }else if(val>x){
                h=m-1;
            }else{
                l = m+1;
            }
        }
        
        return h;
    }
};