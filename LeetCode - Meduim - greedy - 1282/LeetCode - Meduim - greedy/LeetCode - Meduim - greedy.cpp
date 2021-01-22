
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(const pair<int, int>& p1, const pair<int, int>& p2)
{
    return ((p1.second * 1.0 / p1.first) > (p2.second * 1.0 / p2.first));
}

void solve()
{
    int n; cin >> n;
    vector<int>groupSizes(n);
    vector<pair <int, int>>Vp;
    for (int i = 0; i < n; i++)
    {
        cin >> groupSizes[i];
        Vp.push_back({ groupSizes[i], i });
    }
    sort(Vp.begin(), Vp.end());
    vector<int>ans;
    vector<vector<int>>final_ans;
    for (int i = 0; i < n;)
    {
        int tt = Vp[i].first;
        while (tt--)
        {
            ans.push_back(Vp[i].second);
            i++;
        }
        final_ans.push_back(ans);
        ans.clear();
    }

    for (int i = 0; i < final_ans.size(); i++)
    {
        cout << "[";
        int j = 0;
        for (; j < final_ans[i].size() - 1; j++)
        {
            cout << final_ans[i][j] << ",";
        }
        cout << final_ans[i][j] << "]";
    }
  
}

int main()
{
    solve();
}
