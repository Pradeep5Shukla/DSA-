class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;
        int n = asteroids.size();

        for (int i = 0; i < n; i++) {
            int a = asteroids[i];

            if (a > 0) {
                st.push_back(a);
            } else {
                // a < 0: fight against positive tops
                while (!st.empty() && st.back() > 0 && st.back() < -a) {
                    st.pop_back();
                }

                if (st.empty() || st.back() < 0) {
                    st.push_back(a);          // survived, nothing left to hit
                } else if (st.back() == -a) {
                    st.pop_back();            // both explode
                }
                // else: st.back() > -a, current asteroid explodes, do nothing
            }
        }
        return st;
    }
};