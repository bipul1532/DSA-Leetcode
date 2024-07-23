class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int n=arr.size();
        next_permutation(arr.begin(),arr.end());
    }
};