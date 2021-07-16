

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;

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
	int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;

	if (x1 == x2)
		cout << x1 + (y2 - y1) << " " << y1 << " " << x2 + (y2 - y1) << " " << y2 << "\n";
	else if (y1 == y2)
		cout << x1 << ' ' << y1 + x2 - x1 << ' ' << x2 << ' ' << y2 + x2 - x1;
	else
	{
		if (abs(x2 - x1) == abs(y2 - y1))
			cout << x1 << " " << y2 << " " << x2 << " " << y1 << "\n";
		else
			cout << -1 << "\n";
	}
}

int main() {
	init();

	// int tt; cin >> tt;
	// while (tt--)
		solve();
	
}
