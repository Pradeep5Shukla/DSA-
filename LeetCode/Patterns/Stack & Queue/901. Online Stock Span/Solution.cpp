class StockSpanner {
public:
    vector<int> arr;
    stack<int> st;
    StockSpanner() {}

    int next(int price) {

       arr.push_back(price);
        int i = arr.size() - 1;   // index of today's price

        while (!st.empty() && arr[i] >= arr[st.top()]) {
            st.pop();
        }

        int span;
        if (!st.empty()) span = i - st.top();
        else span = i + 1;

        st.push(i);
        return span;
    }
};


/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */