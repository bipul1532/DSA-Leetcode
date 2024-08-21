class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n=s.size();
        int p=part.size();
        int pos=s.find(part);
        while(pos!=string::npos){
            s.erase(pos,p);
            pos=s.find(part);
        }
        return s;
    }
};