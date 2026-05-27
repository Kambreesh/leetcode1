class Solution {
public:
    bool isPalindrome(int x) {
        int m=x;
        long long ans=0;
        if(x < 0){
            return false;
        }
        while(m>0){
            int rem=m%10;
            ans=ans*10+rem;
            m=m/10;
        }
        if(x==ans){
            return true;
        }
        return false;
    }
};