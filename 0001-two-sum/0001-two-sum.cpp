class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // 2 7 11 15
        // nums1 + nums2 = targetl
        //nums2= target - num1;

 unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
         
int temp = target - nums[i];

if(mpp.find(temp)!= mpp.end()){
    return {i,mpp[temp]};
}
else {
    mpp[nums[i]]=i;
}
        }


        return {-1,-1};
    }
};