class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>list;
        map<int,int>mpp;
        //minimum value
        int mv=(n/3)+1;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]]==mv){
                list.push_back(nums[i]);
            }
        }
        return list;
    }
};