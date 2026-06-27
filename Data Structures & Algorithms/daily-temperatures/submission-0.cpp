class Solution {
   public:
    vector<int> dailyTemperatures(vector<int>& temps) {
        vector<int> ans(temps.size(), 0);
        stack<pair<int, int>> st;

        for (int i = 0; i < temps.size(); i++) {
            if (st.empty()){
                st.push({temps[i], i});
                continue;
            }
            pair a = st.top();
            while (a.first < temps[i]) {
                ans[a.second] = i - a.second;
                st.pop();
                if(st.empty()) break;
                a = st.top();
            }
            st.push({temps[i], i});
        }

        return ans;
    }
};
