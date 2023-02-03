class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        map<char, char> pairs{{')', '('}, {'}', '{'}, {']', '['}};
        for (const auto &c : s) {
            if (c == '(' || c == '{' || c == '[') {
                stk.push(c);
            } else {
                if (stk.empty() || stk.top() != pairs[c]) {
                    return false;
                }
                stk.pop();
            }
        }
        return stk.empty();
    }
};