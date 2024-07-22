class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int element,cnt=0;
        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                cnt=1;
                element=nums[i];
            }
            else if(nums[i]==element){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int cnt1=0;
        for(int i=0;i<nums.size();i++){
            if(element==nums[i]){
                cnt1++;
            }
        }
        if(cnt1>(n/2)){
            return element;
        }
        return -1;
    }
};