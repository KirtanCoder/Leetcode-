class Solution {
    public int reverse(int y) {

        int sum=0;
int x = Math.abs(y);
        while(x>0){
            int r = x%10;
             if (sum > Integer.MAX_VALUE / 10 || 
               (sum == Integer.MAX_VALUE / 10 && r > 7)) return 0;

            if (sum < Integer.MIN_VALUE / 10 || 
               (sum == Integer.MIN_VALUE / 10 && r < -8)) return 0;
            sum = sum*10 +r;
            x=x/10;
        }

if(y<0){
    return -1*sum;
}
return sum;
    }
}