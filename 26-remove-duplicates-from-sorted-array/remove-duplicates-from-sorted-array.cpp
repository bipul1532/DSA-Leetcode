class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
         int index=0;
    for(int i=1;i<arr.size();i++){
        if(arr[i]!=arr[index]){
        
            arr[index+1]=arr[i];
            index++;
        }
        
       
        
    }
    return index+1;
    }
};