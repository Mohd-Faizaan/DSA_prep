class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        unordered_map<int,int> mp;
        //inserting in the map
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }

        vector<int> ans;
        //checking for the values & returning the ans vector
        for(int i=1;i<=nums.size();i++)
        {
            if(mp.find(i)==mp.end())
            {
                ans.push_back(i);
            }
        }

        return ans;
    }
};