class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int count = 0;
        for (int i = 0; i < s.size(); i++) {
            if (st.size() == 0) {
                st.push(s[i]);
        }
        else if (st.top() == '(' && s[i] == ')'){
                count++;
                st.pop();
        } else {
                st.push(s[i]);
        }
        }
        return s.size() - (2 * count);
    }
};