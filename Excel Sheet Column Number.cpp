class Solution {
public:
    int titleToNumber(string str) {
         int power = str.length() - 1;
    int value = 0 ;
	for (int i = 0  ; i<=str.length()-1 ; i++)
	{
		value += pow(26, power)*((str[i] - 'A') + 1);
        power-- ;
	}
    return value ;
    }
};
