class Solution {
public:
    vector<string> ans;
    vector<string> addOperators(string s, int t) {
        helper(s , t , 0 , "" , 0 , 0);
        return ans;
    }

    void helper (string s , int t , int i , const string& path, long e , long r )
    {
        if( i == s.length())
        {
            if (e == t )
            {
                ans.push_back(path);
                return;
            }
        }
        string cs;
        long num = 0;

        for(int j=i; j < s.length() ; j++)
        {
            if (j>i && s[i] == '0') return;

            cs = cs + s[j];
            num = num * 10 + s[j]-'0';

            if ( i==0)
            {
                helper(s , t , j+1,path+ cs,num , num);

            }

            else
            {
                helper(s,t  , j+1 , path+ "+" + cs , e + num , num);
                helper(s,t  , j+1 , path+ "-" + cs ,e - num , -num);
                helper(s,t  , j+1 , path+ "*" + cs , e-r + r* num , r*num);
            }

            
        }
    
    }


};