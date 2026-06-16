class Solution {
    public int findKthLargest(int[] nums, int k) {

ArrayList<Integer> list = new ArrayList<>();
       for(int num:nums){
           list.add(num);
       } 


        Collections.sort(list, Collections.reverseOrder());
       
if(list.size()<k){
    return -1;
}

        return list.get(k-1);
    }
}