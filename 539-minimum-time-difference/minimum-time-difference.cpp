class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int>minutes;
        for(int i=0;i<timePoints.size();i++){
            int min=stoi(timePoints[i].substr(3,2));
            int hour=stoi(timePoints[i].substr(0,2));
            int totalminutes=hour*60+min;
            minutes.push_back(totalminutes);
        }
        sort(minutes.begin(),minutes.end());
        int mind=INT_MAX;
        for(int i=1;i<minutes.size();i++){
            int mini=minutes[i]-minutes[i-1];
            mind=min(mini,mind);
        }
        int lastdiff=(minutes[0]+1440)-minutes[minutes.size()-1];
        mind=min(mind,lastdiff);
        return mind;
    }
};