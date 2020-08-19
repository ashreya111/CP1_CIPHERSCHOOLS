class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto itr1=nums.begin();
        auto itr2=++(nums.begin());
        while(itr1!=nums.end() && itr2!=nums.end())
        {
            if(*itr1==*itr2)
            {
                nums.erase(itr2);
            }
            else
            {
                ++itr1;
                ++itr2;
            }
        }
        return nums.size();
    }
};
