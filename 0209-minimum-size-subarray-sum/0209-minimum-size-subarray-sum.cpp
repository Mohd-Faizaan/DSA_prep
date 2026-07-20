class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        //using sliding window approach
        int minLen = INT_MAX;
        int left = 0;
        int currSum = 0;

        for (int right = 0; right < nums.size(); right++) {

            currSum += nums[right];

            while (currSum >= target) {

                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                }

                currSum -= nums[left];
                left++;
            }
        }

        if (minLen == INT_MAX)
            return 0;

        return minLen;



    }
};