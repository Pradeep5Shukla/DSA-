class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.size();
        stack<char> st;
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (st.empty())
                st.push(num[i]);
            else {
                while (!st.empty() && st.top() > num[i] && count < k) {
                    count++;
                    st.pop();
                }

                st.push(num[i]);//push current idx always
            }
        }

        while (count < k && !st.empty()) {//increasing array
            st.pop();
            count++;
        }
        string s = "";
        while (!st.empty()) {
            s += st.top();
            st.pop();
        }

        reverse(s.begin(), s.end());

        //remove leading zeros
        int idx = 0;
        while (idx < s.size() && s[idx] == '0')
            idx++;
        s = s.substr(idx);

        if(s.empty()) return "0";
        else return s;
        
    }
};