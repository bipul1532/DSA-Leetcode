class Solution {
public:
    string customSortString(string order, string s) {
        vector<int>hash(26,-1);
        for(int i=0;i<order.size();i++){
            hash[order[i]-'a']=i;
        }

        auto mycomparator=[&hash](char& ch1,char& ch2){
            return hash[ch1-'a']<hash[ch2-'a'];
        };
        sort(s.begin(),s.end(),mycomparator);
        return s;
    }
};