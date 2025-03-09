class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>nge(n,-1);
        for(int i=0;i<=n-1;i++){
            for(int j=i+1;j<=i+n-1;j++){
                int index=j%n;
                if(nums[index]>nums[i]){
                    nge[i]=nums[index];
                    break;
                }
            }
        }
        return nge;
    }
};