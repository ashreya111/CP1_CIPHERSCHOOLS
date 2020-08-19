class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> count;
        int n=s.length(),i=0;
        for(char c:s)
            count[c]++;
        for(i=0;i<n;i++)
        {
            if(count[s[i]]==1)
                break;
        }
        if(i==n) return -1;
        else
            return i;
    }
};
