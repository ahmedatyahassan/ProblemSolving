

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#define ALL(c) c.begin(), c.end()
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef vector<pii> vii;
typedef vector<bool> vb;
typedef vector<string> vs;

const int MX = 1e9;

void init() {
	cin.tie(0);
	cin.sync_with_stdio(0);
}

vi adj[5];
void solve()
{
    
    string str;
    cin >> str;   
    for (int i = 0; i < str.size(); i++) 
        adj[str[i] - '0'].push_back(i);

    for (int i = 1; i <= 3; i++) 
        adj[i].push_back(1e9);
    
    int ans = MX;
    for (int i = 0; i < str.size(); i++) 
    {
        int mx = 0;
        for (int j = 1; j <= 3; j++)
        {
            int idx = *lower_bound(ALL(adj[j]), i);
            mx = max(mx, idx);
        }
        ans = min(ans, mx - i + 1);
    }

    if (ans > str.size())
        cout << 0 << endl;
    else
        cout << ans << endl;
}

int main() {
	init();

	int tt; cin >> tt;
	 while (tt--)
		solve();
	
}
