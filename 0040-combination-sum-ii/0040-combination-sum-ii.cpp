class Solution {
    set<vector<int>> st;
public:
    void backtrack(vector<int>& candidates, int target, int start,
                   vector<int>& current, vector<vector<int>>& result) {

        if (target == 0) {
            if(st.find(current)==st.end()){
            result.push_back(current);
            st.insert(current);
            }
            return;
        }

        if (target < 0) {
            return;
        }
        

        for (int i = start; i < candidates.size(); i++) {
            if (candidates[i] > target ) {
                continue;
            }

                if(i>start && candidates[i]==candidates[i-1]){
                    continue;
                }
            current.push_back(candidates[i]);

            // Same element can be used again
            backtrack(candidates, target - candidates[i], i+1,
                      current, result);

            current.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> current;
        sort(candidates.begin(),candidates.end());
        backtrack(candidates, target, 0, current, result);

        return result;
    }
};