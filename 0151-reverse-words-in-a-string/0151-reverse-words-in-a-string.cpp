class Solution {
public:
    string reverseWords(string s) {
        
        stringstream ss(s);
        vector<string> words; 
        string word, rs; 
        int i=0; 

        while(ss >> word)
        {
            words.push_back(word);
        }

        for(i=words.size()-1; i>=0; i--)
        {
            rs += words[i];
            if(i > 0)
                rs += ' ';
        }

        return rs; 
    }
};