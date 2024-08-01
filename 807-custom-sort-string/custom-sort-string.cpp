class Solution {
public:
    string customSortString(string order, string s) {
        vector<int>hash(26,-1);

        for(int i=0;i<order.length();i++){
            char ch=order[i];
            hash[ch-'a']=i;
        }

        auto myComparator = [&hash](char& ch1,char& ch2){
            return hash[ch1-'a']<hash[ch2-'a'];
        };
        sort(s.begin(),s.end(),myComparator);
        return s;
    }
};