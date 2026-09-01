class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size()<haystack.size()) return 0;
        for (int i = 0; i <= haystack.size() - haystack.size(); i++) {
            if (haystack.substr(i, needle.size()) == needle) {
                return i;
            }
        }
        return -1;
    }
};