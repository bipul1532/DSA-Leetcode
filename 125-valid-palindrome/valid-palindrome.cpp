class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0;i<s.length();i++){
            if(s[i]>=65 && s[i]<=90){
                s[i]=s[i]-'A'+'a';
            }
        }
        string ans="";
        for(int i=0;i<s.length();i++){
            if(s[i]>=97 && s[i]<=122 || s[i]>='0' && s[i]<='9'){
                ans.push_back(s[i]);
            }
        }
        int i=0;
        int n=ans.length();
        int j=n-1;
        while(i<=j){
            if(ans[i]!=ans[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
};