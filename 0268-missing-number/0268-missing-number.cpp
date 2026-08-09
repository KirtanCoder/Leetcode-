class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
     long totalsum = n* (n+1)/2;

long sum=0;
     for(int i=0;i<n;i++){
        sum += nums[i];
     }

     return totalsum - sum;
    }
};