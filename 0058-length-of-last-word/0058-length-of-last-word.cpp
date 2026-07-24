class Solution {
public:
    int lengthOfLastWord(string s) {
        int flag = 0;
        int c=0;

        for(int i = s.size()-1 ; i>=0 ; i--)
        {
            if( s[i] == ' ' && flag)
            {
                break;
            }
            else if(s[i] != ' ')
            {
                flag = 1;
                c++;
            }
        }
return c;
    }
};