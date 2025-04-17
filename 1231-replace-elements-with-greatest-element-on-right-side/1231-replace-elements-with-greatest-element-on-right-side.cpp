class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> max_val(arr.size(), 0); 
        int len=arr.size(); 
        int i=0; 

        max_val[len-1] = -1; 

        for(i=len-2; i>=0; i--)
        {
            max_val[i] = max(arr[i+1], max_val[i+1]);
        }

        return max_val; 
    }
};