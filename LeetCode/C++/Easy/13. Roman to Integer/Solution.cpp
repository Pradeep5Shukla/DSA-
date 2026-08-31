class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        for(int i = 0; i < s.size(); i++){
            int curr = value(s[i]);
            // int next = (i + 1 < s.size()) ? value(s[i+1]) : 0;
            int next = 0;
            if(i+1 < s.size()){
                next = value(s[i+1]);
            }

            if(curr < next) sum -= curr;
            else sum += curr;
        }
        return sum;
    }

private:
    int value(char c){
        if(c == 'M') return 1000;
        if(c == 'D') return 500;
        if(c == 'C') return 100;
        if(c == 'L') return 50;
        if(c == 'X') return 10;
        if(c == 'V') return 5;
        if(c == 'I') return 1;
        return 0;
    }
};