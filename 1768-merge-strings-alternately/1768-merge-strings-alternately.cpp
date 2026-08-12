class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        string ans="";
        int i=0; int j=0;
        int s1 = word1.size();
        int s2 = word2.size();

        while(i<s1 && j<s2){
            ans = ans + word1[i];
            ans = ans + word2[j];
            i++;
            j++;
        }

        while(i<s1){
            ans = ans+ word1[i];
            i++;
        }

        while(j<s2){
            ans = ans + word2[j];
            j++;

        }

        return ans;
    }
};