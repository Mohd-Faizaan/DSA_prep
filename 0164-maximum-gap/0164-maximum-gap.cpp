class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int nmax=0;
        if(nums.size() <= 1)
        {
            return 0;
        }
        sort(nums.begin(),nums.end());
        
        int max1=0;

        for( int i = 0 ; i <nums.size()-1 ; i++)
        {
            if(nums[i+1] - nums[i] > max1)
            {
                max1 = nums[i+1] - nums[i];
            }
            else if ( nums[i+1] - nums[i] < max1 )
            {
                continue;
            }
            nmax = max(max1,nums[i+1]-nums[i]);
        }

  
   return nmax; }
};