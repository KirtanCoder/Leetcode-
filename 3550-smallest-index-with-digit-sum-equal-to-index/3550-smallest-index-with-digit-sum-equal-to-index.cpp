class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        
        int ans = INT_MAX;

        //extract digit
        
        int i=0;

        while(i<nums.size()){
            int temp = nums[i];
            int sum =0;
            while(temp>0){
                int rem = temp%10;
                sum += rem;

                temp = temp/10;

            }
            if(i==sum){
                ans = min(ans,i);
            }
            i++;
        }

        return ans == INT_MAX ? -1 : ans;
    }
};