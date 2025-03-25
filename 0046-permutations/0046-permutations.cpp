class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> v; 
        ps(v, 0, nums);

        return v; 
        
    }

    void ps(vector<vector<int>>&v, int pos, vector<int>  &nums)
    {
        if(pos >= nums.size())
        {
            v.push_back(nums);
            return; 
        }

        for(int i=pos; i<nums.size(); i++)
        {
            swap(nums[pos], nums[i]);
            ps(v, pos+1, nums);
            swap(nums[pos], nums[i]);
        }
        
    }
};