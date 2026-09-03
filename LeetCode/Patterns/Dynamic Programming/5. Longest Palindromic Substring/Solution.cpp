class Solution {
public:
    string longestPalindrome(string s) {
//         int n = s.size();
//         string result = "";
        
//         for (int i = 0; i < n; i++) {
//             for (int j = i; j < n; j++) {
//                 string sub = s.substr(i, j - i + 1);
//                 if (isPalindrome(sub) && sub.size() > result.size()) {
//                     result = sub;
//                 }
//             }
//         }
//         return result;
//     }
    
// private:
//     bool isPalindrome(string& s) {
//         int left = 0, right = s.size() - 1;
//         while (left < right) {
//             if (s[left] != s[right]) return false;
//             left++;
//             right--;
//         }
//         return true;
//     }   


        int n = s.size();
        if (n == 0) return "";
        
        int start = 0, maxLen = 1;
        
        for (int i = 0; i < n; i++) {
            expandAroundCenter(s, i, i, start, maxLen);       
            expandAroundCenter(s, i, i + 1, start, maxLen);   
        }
        
        return s.substr(start, maxLen);
    }
    
private:
    void expandAroundCenter(string& s, int left, int right, int& start, int& maxLen) {
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            left--;
            right++;
        }

        int len = right - left - 1;
        if (len > maxLen) {
            maxLen = len;
            start = left + 1;
        }
    }


};