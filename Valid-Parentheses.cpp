1class Solution {
2public:
3    bool isValid(string s) {
4        stack<char> st;
5
6        for (char ch : s) {
7            if (ch == '(' || ch == '{' || ch == '[') {
8                st.push(ch);
9            } else {
10                if (st.empty()) return false;
11
12                if ((ch == ')' && st.top() == '(') ||
13                    (ch == '}' && st.top() == '{') ||
14                    (ch == ']' && st.top() == '[')) {
15                    st.pop();
16                } else {
17                    return false;
18                }
19            }
20        }
21
22        return st.empty();
23    }
24};