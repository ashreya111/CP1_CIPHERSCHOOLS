class Solution {
public:
    bool isHappy(int n) {
       if(n==1) return true;
map<int,int>mp;
while(mp[n]==0){
mp[n]=1;
int k=0;
while(n!=0){
k+=(n%10)*(n%10);
n=n/10;
}
n=k;

    }
    return mp[1]; 
    }
};
