class Solution {
public:
    static bool mycomp(string a,string b){
        string t=a+b;
        string s=b+a;
        return t>s;
    }
    string largestNumber(vector<int>& nums) {
        vector<string>str;
        for(int i=0;i<nums.size();i++){
            str.push_back(to_string(nums[i]));
        }
        //call custom comperator
        sort(str.begin(),str.end(),mycomp);
        if(str[0]=="0") return "0";
        //add string and return in answer variable
        string ans="";
        for(auto s:str){
            ans+=s;
        }
        return ans;
    }
};