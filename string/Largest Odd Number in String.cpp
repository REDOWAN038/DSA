// TC : O(N)
// SC : O(N)
// Leetcode 1903

class Solution {
public:
    string largestOddNumber(string num) {
        for(int i=num.size()-1;i>=0;i--){
            int curr = num[i]-'0';
            if(curr%2){
                return num.substr(0,i+1);
            }
        }

        return "";
    }
};