

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;
#define ALL(c) c.begin(), c.end()

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef vector<pii> vii;
typedef vector<bool> vb;
typedef vector<string> vs;

void init() {
	cin.tie(0);
	cin.sync_with_stdio(0);
}

void solve()
{
    double n, x0, y0, count = 0, x, y, m;
    cin >> n >> x0 >> y0;
    set<double> s;
    for (int j = 0; j < n; j++)
    {
        cin >> x >> y;
        if (x - x0 != 0) { m = (y - y0) / (x - x0); s.insert(m); }

        else if (x - x0 == 0)
        {
            count = 1;
        }
    }
    cout << s.size() + count << endl;
   
}

int main() {
	init();

	// int tt; cin >> tt;
	// while (tt--)
	solve();
	
}
