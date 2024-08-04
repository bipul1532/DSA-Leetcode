class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";
        
        for(int i = 0; i < s.length(); i++) {
            if(isalnum(s[i])) { // Check if the character is alphanumeric
                ans.push_back(tolower(s[i])); // Convert to lowercase and add to the new string
            }
        }
        
        // Check if the new string is a palindrome
        int i = 0;
        int n = ans.length();
        int j = n - 1;
        while(i <= j) {
            if(ans[i] != ans[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};