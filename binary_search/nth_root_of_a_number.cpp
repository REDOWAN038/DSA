// TC : O(logn)
// SC : O(1)

class Solution{
	public:
	int func(int mid, int n, int m){
	    long long ans=1;
	    
	    for(int i=1;i<=n;i++){
	        ans*=mid;
	        if(ans>m){
	            return 2;
	        }
	    }
	    
	    if(ans==m){
	        return 1;
	    }
	    
	    return 0;
	}

	int NthRoot(int n, int m)
	{
	    int l=1,h=m;
	    
	    while(l<=h){
	        int mid = (l+h)/2;
	        int v = func(mid,n,m);
	        
	        if(v==1){
	            return mid;
	        }else if(v==2){
	            h = mid-1;
	        }else{
	            l = mid+1;
	        }
	    }
	    
	    return -1;
	}  
};