class Solution {
    public int[] plusOne(int[] digits) {

        // traverse from last digit
        for(int i = digits.length - 1; i >= 0; i--) {

            // if digit less than 9
            if(digits[i] < 9) {
                digits[i]++;
                return digits;
            }

            // if digit is 9 make it 0
            digits[i] = 0;
        }

        // if all digits were 9
        int[] result = new int[digits.length + 1];
        result[0] = 1;

        return result;
    }
}