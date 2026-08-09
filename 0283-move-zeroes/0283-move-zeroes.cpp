class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int j=-1;

        for(int k=0;k<nums.size();k++){
            if(nums[k]==0){
                j=k;
                break;
            }
        }

if(j==-1) return;


int i=j+1;
        while(j<=i && i<nums.size()){
        if(nums[i]==0){
            i++;
        }
        else {
          int temp = nums[i];
          nums[i] = nums[j];
          nums[j]= temp;
          j++;
        }
        }
    }
};