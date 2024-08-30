class Solution {
public:
    string customSortString(string order, string s) {
        int hash[26] = {0};

        // Count the frequency of each character in `s`
        for (int i = 0; i < s.size(); i++) {
            hash[s[i] - 'a']++;
        }

        string result = "";

        // Add characters in the order specified by `order`
        for (int i = 0; i < order.size(); i++) {
            while (hash[order[i] - 'a'] > 0) {
                result.push_back(order[i]);
                hash[order[i] - 'a']--;
            }
        }

        // Add remaining characters that were not in `order`
        for (int i = 0; i < 26; i++) {
            while (hash[i] > 0) {
                result.push_back('a' + i);
                hash[i]--;
            }
        }

        return result;
    }
};
