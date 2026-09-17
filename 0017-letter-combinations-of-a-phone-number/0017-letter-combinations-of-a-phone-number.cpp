class Solution {


    private:
    void solve(string digit,string output,int index,string mapping[],vector<string>&ans){
        if(index >= digit.size()) {
            ans.push_back(output);
            return;
        }

        int element = digit[index]-'0';
        string value = mapping[element];

        for(int i=0;i<value.size();i++){
            output.push_back(value[i]);
        solve(digit,output,index+1,mapping,ans);

            //bacltrack

            output.pop_back();
        }

    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.size()==0) return ans;
        string output ="";
        string mapping[10] ={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        int index=0;


        solve(digits,output,index,mapping,ans);

        return ans;
    }
};