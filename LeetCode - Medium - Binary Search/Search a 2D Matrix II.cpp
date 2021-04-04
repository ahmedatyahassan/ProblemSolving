class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        for(vector<int> &row : matrix)
        {
            int l = 0 , r = row.size() - 1;
            while(l <= r)
            {
                int mid = l  + (r - l) / 2;
                
                if(row[mid] == target)
                    return true;
                else if(row[mid] > target)
                    r = mid - 1;
                else
                    l = mid + 1;
                
            }
        }
        
        return false;
    }
};
