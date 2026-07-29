class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> ans;
    int left = 0;
    int right = 0;
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin() ,nums2.end());

    while ( left < nums1.size() && right< nums2.size())
    {
        if ( nums1[left] > nums2[right])
        {
            right++;
        }
        else if ( nums1[left] < nums2[right])
        {
            left++;
        }
       
        else 
        {
            if ( find(ans.begin(), ans.end() ,nums2[right]) == ans.end())
            {   ans.push_back(nums2[right]);
                
            }
            left++;
            right++;
        }
        
     
    } 
    
    
    return ans;  

    }
};