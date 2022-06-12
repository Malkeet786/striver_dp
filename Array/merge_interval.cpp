class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()<=1)
            return intervals;
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>mergeIntervals;
        mergeIntervals.push_back(intervals[0]);
        for(int i=1; i<intervals.size(); i++) {
            if(mergeIntervals.back()[1] >= intervals[i][0]) 
                mergeIntervals.back()[1] = max(mergeIntervals.back()[1] , intervals[i][1]);
            else mergeIntervals.push_back(intervals[i]); 
        }
        return mergeIntervals;
         
    }
};