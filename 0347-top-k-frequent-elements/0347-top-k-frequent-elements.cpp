class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;

       for(int temp : nums){
        mpp[temp]++;
       }

        vector<pair<int,int>> ans;

        for(auto num: mpp){
            ans.push_back({num.first,num.second});
        }

        sort(ans.begin(),ans.end(),[](auto &a, auto &b){
            return a.second > b.second;
        });

        vector<int> an;
        
        for(int i=0;i<k;i++){
            an.push_back(ans[i].first);
        }

        return an;


     
  
    }
};