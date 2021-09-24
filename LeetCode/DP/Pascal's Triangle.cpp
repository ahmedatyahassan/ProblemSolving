class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
    vector<vector<int>> pascal;
	  for (int i = 0; i < numRows; i++) {
      vector<int> row(i + 1, 1);
      for (int j = 1; j < i; j++) {
        row[j] = pascal[i - 1][j] + pascal[i - 1][j - 1];
      }
		pascal.push_back(row);
	 }
	return pascal;
       
    }
};

/*


[x][y] = [x - 1][y - 1] + [x - 1][y]

[4][1] = [3][0] + [3][1]
[4][2] = [3][1] + [3][2]
0   [1],
1  [1,1],
2  [1,2,1],
3 [1,3,3,1],
4 [1,4,6,4,1]
















*/
