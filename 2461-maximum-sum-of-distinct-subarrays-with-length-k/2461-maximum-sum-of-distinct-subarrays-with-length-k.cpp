class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        unordered_set<int> st;

        long long curSum = 0;
        long long maxSum = 0;

        int left = 0;

        for (int right = 0; right < nums.size(); right++) {

            while (st.count(nums[right]) || st.size() == k) {
                st.erase(nums[left]);
                curSum -= nums[left];
                left++;
            }

            curSum += nums[right];
            st.insert(nums[right]);

            if (st.size() == k) {
                maxSum = max(maxSum, curSum);
            }
        }

        return maxSum;
    }
};