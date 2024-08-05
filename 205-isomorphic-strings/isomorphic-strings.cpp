class Solution {
public:
    bool isIsomorphic(string s, string t) {
         int hash[128];
        int istcharmapped[128];

        // Proper initialization of the arrays
        for (int i = 0; i < 128; ++i) {
            hash[i] = -1;
            istcharmapped[i] = -1;
        }
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