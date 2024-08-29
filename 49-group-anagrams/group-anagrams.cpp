class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>mpp;
        for(auto str:strs){
            string s=str;
            sort(s.begin(),s.end());
            mpp[s].push_back(str);
        }

        vector<vector<string>>ans;
        for(auto it=mpp.begin();it!=mpp.end();it++){
            ans.push_back(it->second);
        }
        return ans;
    }
};