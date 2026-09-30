class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        for(int i = 0; i<s.size(); i++){
            if(st1.size() == 0 && s[i] != '#'){
                st1.push(s[i]);
            }
            else if(s[i] == '#' && st1.size()!=0){
                st1.pop();
            }
            else if(s[i] != '#'){
                st1.push(s[i]);
            }
        }

        stack<char> st2;
        for(int i = 0; i<t.size(); i++){
            if(st2.size() == 0 && t[i] != '#'){
                st2.push(t[i]);
            }
            else if(t[i] == '#' && st2.size()!=0){
                st2.pop();
            }
            else if(t[i] != '#'){
                st2.push(t[i]);
            }
        }

        if(st1 == st2) return true;
        else return  false;
    }
};