class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
// Sort the words. Compare the first and last word one letter at a time.
// Keep adding letters while they are the same. Stop when they are different.
        sort(strs.begin(), strs.end());
        string s = "";
        int i = 0, length = strs.size();
        while (i < strs[0].length()){
            if (strs[0][i] == strs[length-1][i]) s += strs[0][i];
            else break;
            i++;
        }
        return s;
    }
};