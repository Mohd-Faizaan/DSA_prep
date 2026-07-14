class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> ans;

        vector<string> sorted = strs;

        // sort each string
        for (int i = 0; i < sorted.size(); i++)
        {
            sort(sorted[i].begin(), sorted[i].end());
        }

        vector<int> visited(strs.size(), 0);

        for (int left = 0; left < strs.size(); left++)
        {
            if (visited[left])
                continue;

            vector<string> temp;

            temp.push_back(strs[left]);
            visited[left] = 1;

            for (int right = left + 1; right < strs.size(); right++)
            {
                if (!visited[right] && sorted[left] == sorted[right])
                {
                    temp.push_back(strs[right]);
                    visited[right] = 1;
                }
            }

            ans.push_back(temp);
        }

        return ans;
    }
};