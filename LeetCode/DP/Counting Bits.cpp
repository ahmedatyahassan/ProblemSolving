class Solution {
public:
    vector<int> countBits(int n) {
        // odd  >> bin[i/2]
        // even >> bin[i - 1] + 1
    
        vector<int>bin;
        bin.push_back(0);
        for(int  i = 1; i < n + 1; i++){
            if(i % 2 == 0)
                bin.push_back(bin[i/2]);
            else
                bin.push_back(bin[i - 1] + 1);
        }
        
        return bin;
    }
};
