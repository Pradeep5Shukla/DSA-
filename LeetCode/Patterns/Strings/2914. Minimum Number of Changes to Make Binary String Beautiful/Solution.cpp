class Solution {
public:
    int minChanges(string s) {
        int n = s.size();
        int count = 0;
        sort(s.begin(),s.end());
        if(s[n/2]=='0'){
            for(int i =0;i<n;i++){
                if(s[i]=='1') count++;
            }
        }
        else{
            for(int i =0;i<n;i++){
                if(s[i]=='0') count++;
            }
        }
        return count;
    }
};