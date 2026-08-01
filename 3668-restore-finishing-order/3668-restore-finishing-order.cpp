class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_set<int> st;

        // Store all friends
        for (int x : friends) {
            st.insert(x);
        }

        vector<int> ans;

        // Traverse order and keep only friends
        for (int x : order) {
            if (st.find(x) != st.end()) {
                ans.push_back(x);
            }
        }

        return ans;
    }
};