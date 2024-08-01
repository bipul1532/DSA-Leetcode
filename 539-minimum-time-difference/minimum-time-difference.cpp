class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int>minutes;
        for(int i=0;i<timePoints.size();i++){
            int hours=stoi(timePoints[i].substr(0,2));
            int min=stoi(timePoints[i].substr(3,2));
            int totalminutes=hours*60+min;
            minutes.push_back(totalminutes);
        }
        //step 2:-----
        sort(minutes.begin(),minutes.end());
        int mini=INT_MAX;
        for(int i=0;i<minutes.size()-1;i++){
           int minm= minutes[i+1]-minutes[i];
           mini=min(mini,minm);
        }
        int n=minutes.size();
        int lastdiff=(minutes[0]+1440)-minutes[n-1];
        mini=min(lastdiff,mini);
        return mini;
    }
};