class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
            if(intervals.empty()) return 0;

            //comparator banao
            sort(intervals.begin(),intervals.end(),[](vector<int> &a, vector<int> &b){
                return a[1]<b[1];
            });

        int prevInt = intervals[0][1];
        int count=0;

        for(int i=1;i<intervals.size();i++){
           if(intervals[i][0] < prevInt) {
            count++;
           }else {
            prevInt = intervals[i][1];
           }
        }

return count;
    }
};