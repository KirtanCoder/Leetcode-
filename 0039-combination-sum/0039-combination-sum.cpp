class Solution {
public:

set<vector<int>> st;

    void combin(vector<int> &arr,int idx, int tar,vector<int>&comb,vector<vector<int>>&ans) {

        if(idx == arr.size() || tar<0) return;

        if(tar ==0){
        if(st.find(comb)== st.end()){
            ans.push_back(comb);
            st.insert(comb);
        }
        }

        comb.push_back(arr[idx]);
        combin(arr,idx+1,tar-arr[idx],comb,ans);
        //single
        combin(arr,idx,tar-arr[idx],comb,ans);
        //multiple
        comb.pop_back();
        combin(arr,idx+1,tar,comb,ans);
    }
 
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> comb;
       combin(candidates,0,target,comb,ans);
     return ans;

    }
};