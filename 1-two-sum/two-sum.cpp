class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp;
        int req;
        int i;
        int num;
        for(int i=0;i<nums.size();i++){
            req=target-nums[i];
            if( mpp.find(req)!=mpp.end()){
            return {mpp[req],i};
        }
        mpp[nums[i]]=i;
        }
        

        return {-1,-1};
    }
};