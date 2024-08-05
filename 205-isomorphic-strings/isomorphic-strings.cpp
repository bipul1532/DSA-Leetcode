class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int>hash(128,-1);
        vector<int>istcharmapped(128,-1);

        for(int i=0;i<s.size();i++){
            if(hash[s[i]]!=istcharmapped[t[i]]){
                return false;
            }
            else{
                hash[s[i]]=istcharmapped[t[i]]=i;

            }
        }
        
        return true;
    }
};