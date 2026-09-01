class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        string result = "";
        
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                string sub = s.substr(i, j - i + 1);
                if (isPalindrome(sub) && sub.size() > result.size()) {
                    result = sub;
                }
            }
        }
        return result;
    }
    
private:
    bool isPalindrome(string& s) {
        int left = 0, right = s.size() - 1;
        while (left < right) {
            if (s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }
};