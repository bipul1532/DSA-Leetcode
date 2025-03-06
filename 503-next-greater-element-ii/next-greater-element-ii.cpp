class Solution {
public:
//circular interay array 
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> nge(n, -1); // Initialize with -1
        
        // Double loop for brute-force approach
        for (int i = 0; i < n; i++) {
            for (int j = 1; j < n; j++) { // Search next greater element
                int idx = (i + j) % n; // Circular indexing
                if (nums[idx] > nums[i]) {
                    nge[i] = nums[idx];
                    break; // Stop at first greater element
                }
            }
        }
        return nge;
    }
};