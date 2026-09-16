class Solution {
    set<vector<int>> st;
 private:
    void solve(vector<int>nums,vector<int> output,int index,vector<vector<int>> &ans){
        if(index>=  nums.size()){
            if(st.find(output)==st.end()){
                st.insert(output);
                ans.push_back(output);
            }
            
            return;
        }

        //exclude
        solve(nums,output,index+1,ans);

        //include
        int element = nums[index];
        output.push_back(element);
    solve(nums,output,index+1,ans);
    
    
        }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
             vector<vector<int>> ans;
        vector<int> output;
    int index =0;

    sort(nums.begin(),nums.end());
        solve(nums,output,index,ans);

        return ans;
    }
};