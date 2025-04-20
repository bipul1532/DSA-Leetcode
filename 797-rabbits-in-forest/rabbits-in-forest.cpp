class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int, int> count;
        int total = 0;

        // Count frequency of each answer
        for (int ans : answers) {
            count[ans]++;
        }

        // For each unique answer
        for (auto& it : count) {
            int x = it.first;   // Answer given
            int freq = it.second; // Number of rabbits giving this answer

            // Each group has (x + 1) rabbits
            // Number of such groups needed = ceil(freq / (x + 1))
            int groupSize = x + 1;
            int groups = ceil((double)freq / groupSize);

            // Add total rabbits needed for these groups
            total += groups * groupSize;
        }

        return total;
    }
};