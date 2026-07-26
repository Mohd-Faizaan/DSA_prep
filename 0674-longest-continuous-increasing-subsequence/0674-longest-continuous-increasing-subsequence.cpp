class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {

        if (nums.empty())
            return 0;

        int current = 1;
        int ans = 1;

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] > nums[i - 1])
            {
                current++;
            }
            else
            {
                current = 1;
            }

            if (current > ans)
            {
                ans = current;
            }
        }

        return ans;
    }
};
