class Solution {
public:
    int minDeletions(string s) {
        int n = s.size();
	
	vector<int>cnt(100000, 0);

	for (int i = 0; i < n; i++)
	{
		cnt[s[i] - 'a']++;
	}
	vector<int>vis(100000, 0);

	int ans = 0;

	for (int i = 0; i < 100000; i++)
	{
		if (vis[cnt[i]] == 1)
		{
			for (int j = cnt[i] - 1; j >= 0; j--)
			{
				ans++;
				if (vis[j] == 0)
				{
					vis[j] = 1;
					break;
				}
			}
		}
		else
			vis[cnt[i]] = 1;
	}

	return ans;
        
        
        
    }
};
