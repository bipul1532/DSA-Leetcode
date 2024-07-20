class Solution {
public:
    void rotate(vector<int>& arr, int d) {
        int n = arr.size();
        d = d % n;  // Adjust d if it's larger than the size of the array
        vector<int> temp(d);

        // Store the last d elements in the temporary array
        for (int i = 0; i < d; i++) {
            temp[i] = arr[n - d + i];
        }

        // Shift the first n-d elements to the right
        for (int i = n - 1; i >= d; i--) {
            arr[i] = arr[i - d];
        }

        // Copy the elements from the temporary array to the beginning of the array
        for (int i = 0; i < d; i++) {
            arr[i] = temp[i];
        }
    }
};