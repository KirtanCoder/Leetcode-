class Solution {
public:

   bool isPallindrome(string part){
    string temp = part;
    reverse(part.begin(),part.end());
    return part == temp;
   }

    void helper(string s, vector<vector<string>> &ans,vector<string> &partition){
        if(s.size()==0) 
        {
            ans.push_back(partition);
        }

        for(int i=0;i<s.size();i++){
            string part = s.substr(0,i+1);
           if(isPallindrome(part)){
            partition.push_back(part);
            helper(s.substr(i+1),ans,partition);
            partition.pop_back();
           }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> partition;

        helper(s,ans,partition);


        return ans;
    }
};