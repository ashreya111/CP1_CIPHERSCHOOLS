class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
   sort(nums.begin(),nums.end());

    auto it=lower_bound(nums.begin(),nums.end(),val);
    int i=it-nums.begin();
    
    
    for (int j=i;j<nums.size();j++) {
        if (nums[j]!=val) {
            nums[i]=nums[j];
            i++;
        }
    }
    
    return i;
    }
};
