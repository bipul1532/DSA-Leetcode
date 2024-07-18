class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
         int cnt=0;
         int in=0;
    for(int i=1;i<arr.size();i++){
        if(arr[i]!=arr[in]){
        
            arr[in+1]=arr[i];
            in++;
        }
        
       
        
    }
    return in+1;
    }
};