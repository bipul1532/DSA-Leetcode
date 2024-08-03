class Solution {
public:
    bool isPalindrome(int n) {
        int dup = n;
        long rev = 0;
        
        while (n > 0) {
            int lastdigit = n % 10;
            rev = (rev * 10) + lastdigit;
            n = n / 10;
        }
        if (dup == rev) {
            return true;
        } else {
            return false;
        }
    }
};