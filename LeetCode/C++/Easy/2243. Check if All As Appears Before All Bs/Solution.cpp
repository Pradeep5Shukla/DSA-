class Solution {
public:
    bool checkString(string s) {
        int n = s.size();
        int count = 0;
        for(int i =0;i<n;i++){
            if(s[i]=='b'){
                count++;
            }
            if(s[i]=='a' &&  count == 1) return false;
        }
        return true;
    }
};