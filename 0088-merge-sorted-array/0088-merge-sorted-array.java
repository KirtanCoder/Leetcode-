class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        
        // num1 and num2   m+n

        //1,2,3,0,0,0
        //2,5,6

        //compare 1 and 2 put in array
        //but if array 2 is empty then simple return array 1


        //m -nums1 and n- nums2 ka hai

        int i= m-1;
        int j=n-1;

        int k = m+n-1;
       while(j>=0){
        if(i>=0 && nums1[i]>nums2[j]){
            nums1[k]= nums1[i];
            i--;
        }
        else {
            nums1[k]= nums2[j];
            j--;
        }

        k--;
       }

        
    }
}