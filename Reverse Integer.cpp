class Solution {
public:
    int reverse(int x) {
        long long int  sum =0 ;
        while(x!=0){
    
        sum=sum*10 + x % 10 ;
        x=x/10 ;
        }
        if(sum > INT_MAX|| sum<INT_MIN)
            return 0 ;
        else 
            return sum ;
        
    }
};
