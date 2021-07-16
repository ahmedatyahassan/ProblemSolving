

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

bool sgn(int x, int y)
{
	return ((x > 0 && y > 0) || (x < 0 && y < 0));
}

void solve()
{
	int n, k;
	cin >> n >> k;
	int n1 = n - (k - 1);
	int n2 = n - 2 * (k - 1);
	if (n1 > 0 && n1 % 2 == 1) {
		cout << "YES" << endl;
		for (int i = 0; i < k - 1; ++i) cout << "1 ";
		cout << n1 << endl;
	}
	else if (n2 > 0 && n2 % 2 == 0)
	{
		cout << "YES" << endl;
		for (int i = 0; i < k - 1; ++i) cout << "2 ";
		cout << n2 << endl;

	}
	else
		cout << "NO" << endl;
}

int main() {
	init();

	int tt; cin >> tt;
	while (tt--)
		solve();
	
}
