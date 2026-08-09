class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int,int> mpp;

        for(int i=0;i<nums.size();i++){
            if(mpp.find(nums[i])!=mpp.end()){
                mpp[nums[i]]++;
            }
            else {
                mpp[nums[i]]=1;
            }
        }

        int max = INT_MIN;
        int ans = nums[0];
        for(auto it: mpp){
            if(it.second> max){
                ans= it.first;
                max = it.second;
            }
        }

        return ans;
    }
};