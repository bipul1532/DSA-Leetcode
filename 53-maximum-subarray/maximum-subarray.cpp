class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        long long maxisum=INT_MIN;
        long long sum=0;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            // if(sum>maxisum){
            //     maxisum=sum;
            // }
            maxisum=max(maxisum,sum);
            if(sum<0){
                sum=0;
            }
            
        }
        
        return maxisum;
    }
};