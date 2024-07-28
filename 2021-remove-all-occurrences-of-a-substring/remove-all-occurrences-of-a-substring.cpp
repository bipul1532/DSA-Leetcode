class Solution {
public:
    string removeOccurrences(string s, string part) {
        //find() ->> to finding index
        //erease() -> to erase
        int position=s.find(part);
        while(position!=string::npos){
            s.erase(position,part.length());
            position=s.find(part);
        }
        return s;
    }
};