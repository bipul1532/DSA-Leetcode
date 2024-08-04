class Solution {
public:
    bool isvowel(char ch){
        ch=tolower(ch);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j){
            if(isvowel(s[i]) && isvowel(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }else if(!isvowel(s[i])){
                i++;
            }else{
                j--;
            }
        }
        return s;
    }
};