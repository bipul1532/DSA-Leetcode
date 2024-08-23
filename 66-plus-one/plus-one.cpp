class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size()-1;
        for(int i=n;i>=0;i--){
            if(digits[i]!=9){
                digits[i]++;
                return digits;
            }else{
                digits[i]=0;
            }
        }
        if(digits[0]==0){
            vector<int>ans(n+2,0);
            ans[0]=1;
            return ans;
        }
        return digits;
    }
};