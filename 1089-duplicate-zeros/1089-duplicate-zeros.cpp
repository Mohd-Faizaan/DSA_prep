class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        
        int n = arr.size();
        for ( int i = 0 ; i <n ; i++)
        {
            if ( arr[i] == 0)
            {
                arr.insert(arr.begin()+i+1 , 0);
                if(arr.back() != 0 )
                {
                    arr.pop_back();
                }
                i = i+1;

            }
        }
    
       while ( arr.size() != n )
        {
            arr.pop_back();
            
        }
        for (int i = 0; i < arr.size(); i++)
        {
        cout << arr[i] << " ";
        } 
    
    
    
    
    }
};