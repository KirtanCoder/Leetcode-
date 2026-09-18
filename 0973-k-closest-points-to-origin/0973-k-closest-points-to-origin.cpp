class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        priority_queue<pair<int,vector<int>>,
        vector<pair<int,vector<int>>>,
        greater<pair<int,vector<int>>>
        > pq;

        for(int i=0;i<points.size();i++){
            int a = points[i][0];
            int b = points[i][1];

            int dis =(a*a + b*b);

            pq.push({dis,points[i]});
        }

               vector<vector<int>> ans;

               while(k--){
                ans.push_back(pq.top().second);
                pq.pop();


               }

               return ans;
    }
};