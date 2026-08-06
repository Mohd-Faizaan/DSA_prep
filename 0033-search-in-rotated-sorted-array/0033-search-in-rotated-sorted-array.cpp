class Solution {
public:
    int search(vector<int>& nums, int target) {
    
    for( int i = 0 ; i <nums.size() ; i++)
    {
        if ( nums[i] == target)
        {
            return i;
        }
    }
    
    
    
    
    
    
    
    //     vector<int> ans;
    //     for(int x : nums)
    //     {
    //         if ( x == target)
    //         {
    //             for ( int i = target ; i< nums.size() ; i++)
    //             {
    //                 ans.push_back(nums[i]);
    //             }
    //             for(int j = 0 ; j < target ; j++)
    //             {   
    //                 int temp = nums[j];
    //                 ans.push_back(temp);
    //             }
    //             for(int i = 0 ; i < ans.size() ; i++)
    //             {
    //                 if ( ans[i] == target)
    //                 {
    //                     return i;
    //                 }
    //             }
                
    //         }
            
    //     }
    
     return -1;
    }
};