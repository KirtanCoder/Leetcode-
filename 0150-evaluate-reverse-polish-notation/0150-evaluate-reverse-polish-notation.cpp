class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (string s : tokens) {

            if (s != "+" && s != "-" && s != "*" && s != "/") {
                st.push(stoi(s));
            }
            else {
                int b = st.top();
                st.pop();

                int a = st.top();
                st.pop();

                int result;

                if (s == "+")
                    result = a + b;
                else if (s == "-")
                    result = a - b;
                else if (s == "*")
                    result = a * b;
                else
                    result = a / b;

                st.push(result);
            }
        }

        return st.top();
    }
};