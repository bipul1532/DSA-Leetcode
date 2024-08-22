class Solution {
public:
    string convertToTitle(int columnNumber) {
        
        string ans;
        while(columnNumber>0){
            columnNumber--;
            int r=columnNumber%26;
            char ch=r+'A';
            ans.push_back(ch);
            columnNumber=columnNumber/26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};