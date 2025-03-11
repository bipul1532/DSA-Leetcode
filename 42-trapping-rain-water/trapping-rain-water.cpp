class Solution {
public:
    vector<int> leftmax(vector<int>& arr) {
        int n = arr.size();
        vector<int> prefix(n);
        prefix[0] = arr[0];
        for (int i = 1; i < n; i++) {
            prefix[i] = max(prefix[i - 1], arr[i]);
        }
        return prefix;
    }

    vector<int> rightmax(vector<int>& arr) {
        int n = arr.size();
        vector<int> suffix(n);
        suffix[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            suffix[i] = max(suffix[i + 1], arr[i]);
        }
        return suffix;
    }

    int trap(vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return 0;

        vector<int> lmax = leftmax(arr);
        vector<int> rmax = rightmax(arr);

        int total = 0;
        for (int i = 0; i < n; i++) {
            total += min(lmax[i], rmax[i]) - arr[i];
        }

        return total;
    }
};
