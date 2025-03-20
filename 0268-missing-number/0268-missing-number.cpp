class Solution {
public:
    int missingNumber(vector<int>& nums) {

        map<int, int> m; 
        int i=0; 

        for(i=0; i<nums.size(); i++)
        {
            m[nums[i]] = 1; 
        }

        for(i=0; i<=nums.size(); i++)
        {
            if(m[i] == 0)
                return i; 
        }

        return 0; 
        
    }
};