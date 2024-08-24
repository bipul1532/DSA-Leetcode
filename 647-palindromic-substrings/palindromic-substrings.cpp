class Solution {
public:
    int expandbothside(string s,int i,int j){
        int n=s.size();
        int cnt=0;
        while(i>=0 && j<n && s[i]==s[j]){
            cnt++;
            i--;
            j++;
        }
        return cnt;
    }
    int countSubstrings(string s) {
        int n=s.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            int oddkaans=expandbothside(s,i,i);
            cnt=cnt+oddkaans;
            int evenkaans=expandbothside(s,i,i+1);
            cnt=cnt+evenkaans;
        }
        return cnt;
    }
};