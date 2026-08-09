class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int TotalSum=0;
        for(int i=0;i<nums.size();i++){
            TotalSum += nums[i];
        }
int leftSum=0;
        for(int i=0;i<nums.size();i++){
           
           int rightSum = TotalSum- leftSum - nums[i];
            if(rightSum == leftSum){
                return i;
            }
            leftSum += nums[i];
        }
return -1;
    }
};