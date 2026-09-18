class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReach=0;

        for(int i=0;i<nums.size();i++){


            //unReachable case
            if(i>maxReach){
                return false;
            }


            //update maxReach
            maxReach = max(maxReach,nums[i]+i);

            //conditon satify
            if(maxReach>=nums.size()-1){
                return true;
            }
        }

        return true;
    }
};