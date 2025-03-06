class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
         unordered_map<int, int> ngeMap; // Stores next greater element for each number in nums2
    stack<int> st;  // Monotonic decreasing stack

    // Compute next greater element for each number in nums2
    for (int num : nums2) {
        while (!st.empty() && st.top() < num) {
            ngeMap[st.top()] = num; // Store the next greater element for the popped element
            st.pop();
        }
        st.push(num);
    }

    // Remaining elements in stack have no greater element
    while (!st.empty()) {
        ngeMap[st.top()] = -1;
        st.pop();
    }

    // Fill result for nums1 using the precomputed hash map
    vector<int> result;
    for (int num : nums1) {
        result.push_back(ngeMap[num]);
    }

    return result;
    }
};