class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp;
        int req;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            req=target-num;
            if(mpp.find(req)!=mpp.end()){
                return{ mpp[req],i};
            }
            mpp[num]=i;
        }
        return {-1,-1};
    }
};