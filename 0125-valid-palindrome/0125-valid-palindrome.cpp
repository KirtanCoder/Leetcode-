class Solution {
public:
    bool isPalindrome(string s) {
        

        int i=0;
        int j= s.length()-1;

        while(i<j){

            while(i<j && !isalnum(s[i])) i++;
            while(i<j && !isalnum(s[j])) j--;



            //convert to lower case and comapare
            if(tolower(s[i])!=tolower(s[j])) return false;

            i++;
            j--;
            
        }

        return true;
    }
};