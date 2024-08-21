class Solution {
public:
    bool equalFrequency(string word) {
        int n = word.size();
        vector<int> freq(26, 0);

        // Count frequency of each character
        for (char c : word) {
            freq[c - 'a']++;
        }

        // Use a map to count how many times each frequency occurs
        map<int, int> freqCount;
        for (int f : freq) {
            if (f > 0) {
                freqCount[f]++;
            }
        }

        // If there's only one frequency, return true
        if (freqCount.size() == 1) {
            // Either all characters have the same frequency
            // or one character occurs only once (e.g., "a" in "aabb")
            return freqCount.begin()->first == 1 || freqCount.begin()->second == 1;
        }

        // If there are two different frequencies
        if (freqCount.size() == 2) {
            auto it1 = freqCount.begin();
            auto it2 = next(it1);

            // One frequency should be 1 more than the other and it should occur exactly once
            if ((it1->first + 1 == it2->first && it2->second == 1) ||
                (it1->first == 1 && it1->second == 1)) {
                return true;
            }
        }

        return false;
    }
};
