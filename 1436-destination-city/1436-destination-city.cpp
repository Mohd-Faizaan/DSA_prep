class Solution {
public:
    string destCity(vector<vector<string>>& paths) {

        unordered_set<string> st;
        
        // storing all source cities
        for (auto &path : paths)
        {
            st.insert(path[0]);
        }

        // find the city that is never a source
        for (auto &path : paths)
        {
            if (st.find(path[1]) == st.end())
            {
                return path[1];
            }
        }

        return "";
    }
};