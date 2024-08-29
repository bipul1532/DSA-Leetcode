class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";
        int start = 0, maxLength = 1;
        int n = s.size();

        auto expandAroundCenter = [&](int left, int right) {
            while (left >= 0 && right < n && s[left] == s[right]) {
                left--;
                right++;
            }
            // After the loop, left and right are one step beyond the palindrome bounds
            int length = right - left - 1;
            if (length > maxLength) {
                start = left + 1;
                maxLength = length;
            }
        };

        for (int i = 0; i < n; i++) {
            // Odd length palindromes (single character center)
            expandAroundCenter(i, i);
            // Even length palindromes (two consecutive characters center)
            expandAroundCenter(i, i + 1);
        }

        return s.substr(start, maxLength);
    }
};
