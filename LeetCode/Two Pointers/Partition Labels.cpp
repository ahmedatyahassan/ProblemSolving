class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char , int>m;
        
        for(int i = 0 ; i < s.length() ; i++)
        {
            m[s[i]] = i + 1;
        }
        
        vector<int>ans;
        for(int i = 0 ; i < s.length() ;i++)
        {
            int longest = m[s[i]];

            for(int  j = i ; j < m[s[i]] ; j++)
            {
                longest = max(m[s[j]] , longest);
            }

            ans.push_back(longest - i + 1);
        }
        
       
        return ans;
    }
};
