class Solution {
public:
    static bool check(string &a,string &b){
        return (a+b)>=(b+a);
    }
    string largestNumber(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                count++;
            }
        }
        if(count==nums.size()){
            return "0";
        }

        //take a string vector to store string 
        vector<string>s(nums.size(),"");

        for(int i=0;i<nums.size();i++){
            s[i]=to_string(nums[i]);
        }
        //we will sort our string array based on custom comperator
        sort(s.begin(),s.end(),check);
        //append the ans of sorted array in answer variable
        string ans="";
        for(int i=0;i<s.size();i++){
            ans=ans+s[i];
        }
        return ans;
    }
};