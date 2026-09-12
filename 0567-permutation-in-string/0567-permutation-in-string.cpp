class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int freq1[26] = {0};

        for(int i=0;i<s1.length();i++){
            freq1[s1[i]-'a']++;
        }

        for(int i=0;i<s2.length();i++){
            int windFreq[26]= {0};

            int windIdx=0;
            int idx=i;

            while(windIdx<s1.length() && idx <s2.length()){
                windFreq[s2[idx]-'a']++;
                idx++;
                windIdx++;
            }
            if(check(windFreq,freq1)) return true;
        }

        return false;
    }

    bool check(int freq1[],int freq2[]){
        for(int i=0;i<26;i++){
            if(freq1[i]!=freq2[i]) return false;
        }

        return true;
    }
};