// class Solution {
// public:
//     bool isValid(string s) {
//        stack<char> st;
//         for(int i = 0 ;i < s.size() ; i++){
//             if(s[i] =='a') st.push(s[i]);
//              else if (s[i] == 'b') {
//                 if (!st.empty() && st.top() == 'a') st.push(s[i]);
//                 else return false;
//             }
//             else { // 'c'
//                 if (!st.empty() && st.top() == 'b') {
//                     for (int k = 0; k < 2; k++) st.pop();
//                 }
//                 else return false;
//             }
//         }
//         return st.empty();
        
//     }
// };


class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0 ;i < s.size() ; i++){
            if(s[i] =='a') st.push(s[i]);
            else if (s[i]=='b' && !st.empty() && st.top()=='a') st.push(s[i]);
            else if (s[i]=='c' && !st.empty() && st.top()=='b'){
                for(int k = 0; k<2; k++ ){
                     st.pop();
                }
            } 
            else return false
        }
        if(st.empty()) return true;
        else return false;
        
    }
};