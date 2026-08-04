class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int left = 0 , right = 0;
        vector<int>nums3;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int flg = 0;
       while( left < nums1.size() && right < nums2.size())
       {
        if(nums1[left] == nums2[right])
        {
            nums3.push_back(nums1[left]);
            left++;
            right++;
        }
        else if ( nums1[left] < nums2[right])
        {
            left++;
        

        }
        else if ( nums1[left] > nums2[right])
        {
            right++;
        }
       }
       
    
       
       
     
     
       
        return nums3;
    }
};