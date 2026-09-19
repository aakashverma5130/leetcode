class Solution {
public:
    bool isPalindrome(int x) {
        long long original = x;
        long long reverse = 0;
        while(original > 0){
            long long lastdigit  = original%10;
            reverse  = reverse*10 + lastdigit;
            original = original/10;
        }
        if(reverse == x){
            return true;
        }
        else{
            return false;
        }
    }
};