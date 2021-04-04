class Solution {
public:
    int minPartitions(string n) 
    {
        int maxInt = 0;
        for(int i = 0 ; i < n.length(); i++)
        {
            maxInt = max(n[i] - '0' , maxInt); 
        }
        
        return maxInt;
    }
};
