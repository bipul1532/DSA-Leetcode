class Solution {
public:
    bool checkPalindrome(string str,int i,int j) {
        while (i <= j) {
            if (str[i] != str[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    int countSubstrings(string s) {
        int cnt=0;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (checkPalindrome(s, i, j)) {
                    cnt++;
                }
            }
        }

        return cnt;
    }
};