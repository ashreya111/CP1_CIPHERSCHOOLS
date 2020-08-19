class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mymap;
        vector<int> result(2);
        unordered_map<int,int>::iterator itr;
        for(int i=0;i<nums.size();i++)
        {
            itr=mymap.find(target-nums[i]);
            if(itr!=mymap.end())
            {
                result[0]=itr->second;
                result[1]=i;
                return result;
            }
            mymap.insert(make_pair(nums[i],i));
        }
        return result;
        
    }
};
