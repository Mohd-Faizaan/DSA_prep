class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> sorted = heights ;
        sort(sorted.begin() , sorted.end());
        int c = 0;
        int left = 0;
        int right = 0;

        while( left < heights.size() && right < sorted.size())
        {
            if ( heights[left] != sorted[right])
            {
                c = c+1;
                left++;
                right++;
            }
            else
            {
                left++;right++;
            }
        }
    return c;
    }
};