class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(),digits.end());
        int carry=1;
        for(int i=0;i<digits.size();i++)
        {
            if(carry==0)
            {
                continue;
            }
            else
            {
                int pre=carry;
                if(digits[i]+carry<10)
                {
                    carry=0;
                }
                else
                {
                    carry=1;
                    
                }
                digits[i]=(digits[i]+pre)%10;
            }
        }
       if(carry==1)
       {
           digits.push_back(1);
       }
        reverse(digits.begin(),digits.end());
        return digits;
    }
};
