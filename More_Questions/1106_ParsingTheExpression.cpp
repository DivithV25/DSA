class Solution {
public:
    char solveOp(vector<char>& values, char op) {
        if (op == '!') {
            return values[0] == 't' ? 'f' : 't';
        }

        if (op == '&') {
            for (char& ch : values) {
                if (ch == 'f') {
                    return 'f';
                }
            }
            return 't';
        }

        if (op == '|') {
            for (char& ch : values) {
                if (ch == 't') {
                    return 't';
                }
            }
            return 'f';
        }
        return 't';
    }
    bool parseBoolExpr(string expression) {
        int n = expression.size();
        stack<char> st;

        for (int i = 0; i < n; i++) {
            if (expression[i] == ',') {
                continue;
            }
            if (expression[i] == ')') {
                vector<char> ans;
                while (st.top() != '(') {
                    ans.push_back(st.top());
                    st.pop();
                }
                st.pop();
                char op = st.top();
                st.pop();
                st.push(solveOp(ans, op));
            } else {
                st.push(expression[i]);
            }
        }
        return st.top() == 't' ? true : false;
    }
};