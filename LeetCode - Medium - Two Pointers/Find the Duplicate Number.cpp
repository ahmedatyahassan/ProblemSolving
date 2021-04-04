class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int>vis(nums.size());
        int i = 0;
        for(; i < nums.size() ; i++)
        {
            if(vis[nums[i]] == 0)
                vis[nums[i]] = 1;
            else
                break;
        }
        return nums[i];
    }
};




