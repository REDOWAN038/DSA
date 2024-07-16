// TC : O(N)
// SC : O(1) 

class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        int xorr=0;
        for(int i=0;i<n;i++){
            xorr^=arr[i];
            xorr^=(i+1);
        }
        
        int v = (xorr & ~(xorr - 1));
        int x=0,y=0;
        
        for(int i=0;i<n;i++){
            int c = arr[i]&v;
            
            if(c!=0){
                x^=arr[i];
            }else{
                y^=arr[i];
            }
        }
        
        for(int i=1;i<=n;i++){
            int c = i&v;
            
            if(c!=0){
                x^=i;
            }else{
                y^=i;
            }
        }
        
        int cnt=0;
        
        for(int i=0;i<n;i++){
            if(arr[i]==x){
                cnt+=1;
            }
        }
        
        if(cnt==2){
            return {x,y};
        }else{
            return {y,x};
        }
    }
};