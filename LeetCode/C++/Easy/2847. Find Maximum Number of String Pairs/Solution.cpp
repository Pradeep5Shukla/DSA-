class Solution {
public:

string reversenum(string s){
        int i =0;
        int j=s.size()-1;
        while(j>i){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        return s;

    }


    int maximumNumberOfStringPairs(vector<string>& words) {
        int n = words.size();
        int count = 0;
        unordered_set<string> s;
        for(int i =0;i<n;i++){
            s.insert(words[i]);
        }
        for(int i =0;i<n;i++){
            string rev = reversenum(words[i]);
            if(rev == words[i]) continue;
            if(s.find(rev)!=s.end()){
                count++;
            }
        }
        return count/2;
    }
};