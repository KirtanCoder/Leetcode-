class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        stack<int> st;
    int n = temperatures.size()-1;

vector<int> res(n+1,0);
        for(int i=n;i>=0;i--){
            

            while(!st.empty() && temperatures[i]>= temperatures[st.top()]){
                st.pop();
            }


        if(!st.empty()){
            res[i]=st.top()-i;
        }





            st.push(i);

        }
        return res;
    }
};