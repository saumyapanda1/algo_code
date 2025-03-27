class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int i=0; 
        int rsum = 0; 
        int lsum = 0; 

        for(i=0; i<nums.size(); i++)
        {
            rsum += nums[i];
        }

        for(i=0; i<nums.size(); i++)
        {
            rsum -= nums[i];
            
            if( lsum == rsum )
                return i;

            lsum += nums[i];

        }

        return -1; 
    }
};