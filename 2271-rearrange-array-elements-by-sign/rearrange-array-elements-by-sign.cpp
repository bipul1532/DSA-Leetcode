class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans(n,1);
        int PosIndex=0;
        int negIndex=1;
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                ans[PosIndex]=arr[i];
                PosIndex+=2;
            }else{
                ans[negIndex]=arr[i];
                negIndex+=2;
            }
        }
        return ans;
    }
};