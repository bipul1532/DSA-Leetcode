class Solution {
public:
    string reverseWords(string str) {
        int n = str.size();
        int i = 0;
        string ans = "";
        while (i < n) {
            while (str[i] == ' ' && i < n) {
                i++;
            }
            string temp = "";
            while (str[i] != ' ' && i < n) {
                temp += str[i];
                i++;
            }
            if (temp.size() > 0) {
                if (ans.size() == 0) {
                    ans = temp;
                } else {
                    ans = temp + " " + ans;
                }
            }
        }
        return ans;
    }
};