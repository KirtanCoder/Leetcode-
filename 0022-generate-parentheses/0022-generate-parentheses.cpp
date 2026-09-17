class Solution {

    private:
    void solve(int n,int open,int close,string output,vector<string>&ans){
        if(output.size()==2*n){
            ans.push_back(output);
            return;
        }


        //Add open bracket
    if(open<n){
        output.push_back('(');
        solve(n,open+1,close,output,ans);

        //backtracking
        output.pop_back();
    }


        //Add close bracket
        if(open>close){
            output.push_back(')');
            solve(n,open,close+1,output,ans);
        }
        
    }
public:
    vector<string> generateParenthesis(int n) {
        string str="";
        vector<string> ans;
        solve(n,0,0,str,ans);
        return ans;
    }
};