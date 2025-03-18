class Solution {
public:
    bool isAnagram(string s, string t) {
        map<int, int> m;
        map<int, int>::iterator it; 
        int i=0, count = 0; 

        for(i=0; i<s.size(); i++)
        {
            m[s[i]] += 1;
        }

        for(i=0; i<t.size(); i++)
        {
            m[t[i]] -= 1; 
        }

        for(it = m.begin(); it != m.end(); it++)
        {
            if (it->second != 0)
                return false; 
        }

        return true; 
    }
};