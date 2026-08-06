class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        vector<int> nums1 = nums;
        sort(nums1.begin(),nums1.end());
        long min = nums1[0];
        long max = nums1[nums1.size()-1];

       long long diff = max-min;
        long long v = diff * k;
        return v;
    }
};