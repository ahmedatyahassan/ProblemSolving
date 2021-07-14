

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
	int n; cin >> n;
	vector<int>vi(n);

	for (int i = 0; i < n; i++)
		cin >> vi[i];
		
	long long sum = 0;
	for (int i = 0; i < n; ++i)
	{
		int cur = vi[i];
		int j = i;
		while (j < n && sgn(vi[i] , vi[j])) {
			cur = max(cur, vi[j]);
			++j;
		}
		sum += cur;
		i = j - 1;
	}
		
	cout << sum << endl;
	


}

int main() {
	init();

	int tt; cin >> tt;
	while (tt--)
		solve();
	
}
