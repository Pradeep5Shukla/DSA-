class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();
        int i = 0;
        int j = n-1;
        while(i<=j){
            if(s[i] == s[j]){
                while(i<=j && s[i]==s[i+1]) i++;
                while(i<=j && s[i]==s[i+1]) i++;
                i++;
                j--;
            }
            else break;
        }
        if(i>=j) return 0;
        else return j-i+1;
        
    }
};