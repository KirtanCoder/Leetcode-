class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low =1;
        int high = maximum(piles);
        int ans= INT_MAX;

        while(low<=high){
            int mid = low + (high-low)/2;

          long long totalHour = helper(piles,mid);

           if(totalHour<=h){
                ans = mid;
                high = mid-1;
           }
           else {
            low = mid+1;
           }


        }
        return ans;

    }

    int maximum(vector<int> &arr){
        int maxi =INT_MIN;

        for(int i=0;i<arr.size();i++){
            maxi = max(maxi,arr[i]);
        }

        return maxi;
    }


    long long helper(vector<int> &arr,int s){
        long long hour =0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]%s==0){
                hour += arr[i]/s;
            }else {
                hour += arr[i]/s +1;
            }

        }
        return hour;
    }
};