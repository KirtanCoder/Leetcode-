class Solution {

    private:
    void solve(vector<int> candidates,int target,int index, vector<vector<int>> &ans,vector<int> output)  {
        if(target==0){

            ans.push_back(output);
            return;
        }
        if(index>= candidates.size()){
            return;
        }
        if(target <0){
            return;
        }

        //include
        output.push_back(candidates[index]);
        solve(candidates,target-candidates[index],index,ans,output);

        //backtrack
        output.pop_back();

        //exlcude
        solve(candidates,target,index+1,ans,output);
    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> output;
        int index =0;
        solve(candidates,target,index,ans,output);

        return ans;
    }
};