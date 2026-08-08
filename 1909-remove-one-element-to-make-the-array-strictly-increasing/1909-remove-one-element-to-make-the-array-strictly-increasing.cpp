class Solution {
public:
    bool check(vector<int> nums)
    {
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] >= nums[i + 1])
                return false;
        }
        return true;
    }

    bool canBeIncreasing(vector<int>& nums) {

        for (int left = 0; left < nums.size(); left++)
        {
            vector<int> nums1 = nums;

            nums1.erase(nums1.begin() + left);

            if (check(nums1))
            {
                return true;
            }
        }

        return false;
    }
};