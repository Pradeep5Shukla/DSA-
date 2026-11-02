class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();
        int i = 0;
        int j = n-1;
        while(i<j){
            if(s[i] == s[j]){
                while(i<j && s[i]==s[i+1]) i++;
                while(i<j && s[j]==s[j-1]) j--;
                if(i==j) return 0;
                i++;
                j--;
            }
            else break;
        }
         return j-i+1;
    }
};