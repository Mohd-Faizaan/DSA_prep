class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string ans = "";
        
        for (int i = n - 1; i >= 0; i--) {
            string word = "";
            
            // Extract  te word  by  traversing backwards
            while (i >= 0 && s[i] != ' ') {
                word = s[i] + word;
                i--;
            }
            
            // If a word was formed,  append it to  the answer
            if (word.size() >= 1) {
                ans += (" " + word);
            }
        }
        
        return ans.substr(1);
    }
};