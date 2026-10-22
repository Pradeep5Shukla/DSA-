class Solution {
public:
    string removeDuplicateLetters(string s) {

        //by using string;
        int n =s.size();

        string result;
        vector<bool> taken(26,false);
        vector<int> lastidx(26);

        //filling lastidx of each char in string
        for(int i = 0 ;i<n ; i++){
            char ch = s[i];
            lastidx[ch-'a'] = i;
        }

        // filling taken array when char is not present
        for(int i = 0; i<n ; i++){
            char ch = s[i];
            int idx = ch-'a';
            if(taken[idx] == true) continue;
            while(result.size()>0 && result.back()>ch && lastidx[result.back()-'a'] > i){
                taken[result.back()-'a'] = false;
                result.pop_back();
            }
            result.push_back(ch);
            taken[idx] = true;
        }
        return result;


        // //by using stack;
        // int n =s.size();

        // stack<char> st;
        // vector<bool> taken(26,false);
        // vector<int> lastidx(26);

        // //filling lastidx of each char in string
        // for(int i = 0 ;i<n ; i++){
        //     char ch = s[i];
        //     lastidx[ch-'a'] = i;
        // }

        // // filling taken array when char is not present
        // for(int i = 0; i<n ; i++){
        //     char ch = s[i];
        //     int idx = ch-'a';
        //     if(taken[idx] == true) continue;
        //     while(st.size()>0 && st.top()>ch && lastidx[st.top()-'a'] > i){
        //         taken[st.top()-'a'] = false;
        //         st.pop();
        //     }
        //     st.push(ch);
        //     taken[idx] = true;
        // }
        // string result;
        // while(!st.empty()){
        //     result.push_back(st.top());
        //     st.pop();
        // }
        // reverse(result.begin(),result.end());
        // return result;
    }
};