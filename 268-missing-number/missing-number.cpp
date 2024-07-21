class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i <= n; i++) {
            bool flag = false;
            for (int j = 0; j < n; j++) {
                if (i == arr[j]) {
                    flag = true;
                    break;
                }
            }

            if (flag == false) {
                return i;
            }
        }
        return -1;
    }
};