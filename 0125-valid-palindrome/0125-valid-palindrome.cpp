class Solution {
public:
    bool isPalindrome(string s) {

        for (char &c : s) {
            c = tolower(c);
        }

        string str = "";
        for (char c : s) {
            if (isalnum(c)) {
                str += c;
            }
        }

        int n = str.length();

        for (int i = 0; i < n / 2; i++) {
            if (str[i] != str[n - 1 - i]) {
                return false;
            }
        }

        return true;
    }
};