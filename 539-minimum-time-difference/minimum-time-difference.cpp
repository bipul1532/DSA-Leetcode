class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int>minutes;
        //step 1: convert time string into minutes integer value
        for(int i=0;i<timePoints.size();i++){
            string curr=timePoints[i];
            int hours=stoi(curr.substr(0,2)); //strting from zero index upto 2 length
            int min=stoi(curr.substr(3,2));  //string from third index upto 2 length
            int totalminutes=hours*60+min;
            minutes.push_back(totalminutes);
        }
        //step2:sort
        sort(minutes.begin(),minutes.end());
        //step3: difference and calculate min difference
        int mini=INT_MAX;
        int n=minutes.size();
        for(int i=0;i<n-1;i++){
            int diff=minutes[i+1]-minutes[i];
            mini=min(diff,mini);
        }
        //imp missing part
        int lastdiff=(minutes[0]+1440)-minutes[n-1];
        mini=min(lastdiff,mini);
        return mini;
    }
};