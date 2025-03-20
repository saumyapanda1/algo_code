class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        map<int, int> mn; 
        map<int, int>::iterator it; 
        int index = 0;
        int i=0; 

        for(i=0; i<m; i++)
        {
            mn[nums1[i]]++;
        }
        for(i=0; i<n; i++)
        {
            mn[nums2[i]]++;
        }

        for(it = mn.begin(); it != mn.end(); it++)
        {
            for(i=0; i<it->second; i++)
            {
                nums1[index++] = it->first; 
            }
        }
    }
};