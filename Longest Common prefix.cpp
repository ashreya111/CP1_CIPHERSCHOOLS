class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
         int n = str.size();
        if(n==0) return "";
        
        string ans  = "";
        sort(str.begin(), str.end()); 
        string first = str[0];
        string last = str[n-1];
        
        for(int i=0; i<first.size(); i++){
            if(first[i]==last[i]){
                ans = ans + first[i];
            }
            else
                break;
            
        }
        
        return ans;
    }
};
