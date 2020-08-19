class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int c:nums)mp[c]++;
        for(int i=0;i<n;i++)
        {
            if(mp[nums[i]]>1)
            {
                return nums[i];
                
            }
        }
        return 0;
    }
};
