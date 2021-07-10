class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int> >vvi;
        int i = 0;
        sort(nums.begin() , nums.end());
        do
        {
            vvi.push_back(nums);   
        }while(next_permutation(nums.begin(), nums.end()));
    
        return vvi;
    }
    
};


// The complexity of std::next_permutation that transforms the permutation to the next permutation in the lexicographic order is O(n) in the worst case.
