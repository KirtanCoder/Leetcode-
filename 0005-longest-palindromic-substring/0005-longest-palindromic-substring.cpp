class Solution {
public:
    string longestPalindrome(string s) {
        int start =0;
        int maxLen =1;

     for(int i=0;i<s.length();i++){

        //odd length expand
        expand(s,i,i,start,maxLen);

        //even length expand 
        expand(s,i,i+1,start,maxLen);
     }

     return s.substr(start,maxLen);
    }

    public:
    void expand(string &s,int left,int right,int &start, int &maxLen){
        while(left>=0 && right<s.size() && s[left]==s[right]){

            if(right-left+1 > maxLen){
                start = left;
                maxLen = right-left+1;
            }

            left--;
            right++;
        }
    }
};