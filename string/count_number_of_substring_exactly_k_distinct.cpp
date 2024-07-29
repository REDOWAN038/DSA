// TC : O(n)
// SC : O(1)

class Solution
{
  public:
    long long int getCount(string s, int k){
     vector<int>mp(26);
    	int d=0,res=0;
    	int i=0,j=0;
    	
    	while(j<s.size()){
    	    mp[s[j]-'a']+=1;
    	    
    	    if(mp[s[j]-'a']==1){
    	        d++;
    	    }
    	    
    	    while(d>k){
    	        mp[s[i]-'a']-=1;
    	        if(mp[s[i]-'a']==0){
    	            d-=1;
    	        }
    	        i++;
    	    }
    	    
    	    res+=(j-i+1);
    	    j++;
    	}
    	
    	return res;
    }
    
    long long int substrCount (string s, int k) {
    	return getCount(s,k)-getCount(s,k-1);
    }
};