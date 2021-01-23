#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

bool cmp(const pair<int, int>& p1, const pair<int, int>& p2)
{
    return ((p1.second * 1.0 / p1.first) > (p2.second * 1.0 / p2.first));
}

void solve()
{
    string str; cin >> str;

    int n = str.length();

    map<char, int>m;

    for (int i = 0; i < n; i++)
    {
        m[str[i]] = i;
    }
    // ababcbacadefegdehijhklij
    vector<int>ans;
    for (int i = 0; i < str.length(); i++)
    {
        int longest = m[str[i]];
        int st = i;
        for (; i < longest; i++)
        {
            longest = max(m[str[i]], longest);
        }

        ans.push_back(longest - st + 1);
    }

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";

}

int main()
{
    solve();
}