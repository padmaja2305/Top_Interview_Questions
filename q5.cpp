class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<int>merge_intervals;
        for(int i=0;i<intervals.size();i++){
            for(int j=i;j<intervals.size();j++){
                if(intervals[i][j]> intervals[i+1][j]){
                    merge_intervals.push_back(intervals[i][j]);
                    merge_intervals.push_back(intervals[i+1][j]);
                }
                else{
                    merge_intervals.push_back(intervals[i+1][j]);
                    merge_intervals.push_back(intervals[i][j]);
                }

                    
                  



    }
    
};