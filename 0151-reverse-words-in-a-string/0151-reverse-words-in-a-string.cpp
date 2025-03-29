class Solution {
public:
    string reverseWords(string s) {
        string rs="", str=""; 
        int i=0; 
        
        for(i=0; i<s.size()-1; i++)
        {
            str += s[i];

            if(s[i] != ' ' && s[i+1] == ' ' )
            {
                rs = str + rs; 
                str.clear();
            }
            else if (s[i] == ' ' && s[i+1] != ' ')
            {
                if(!rs.empty())
                    rs = ' ' + rs; 
                str.clear();
            }
            
        }

        str += s[i];
        if(str.size() > 0 && str[0] != ' ') {
            rs = str + rs; 
        }

        return rs; 
    }
};