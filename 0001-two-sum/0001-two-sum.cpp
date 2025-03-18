class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m; 
        vector<int> v; 
        int i=0; 


// nums = [2,7,11,15]

// nums = [3,2,4] 

        for(i=0; i<nums.size(); i++)
        {
            auto x = m.find(target-nums[i]);
            if (x != m.end() )
            {
                
                v.push_back(x->second);
                v.push_back(i);
                return v; 
            }
            else 
                m[nums[i]] = i; 
        }

        return v; 
    }
};