

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
	int n; cin >> n;
	vi a(n); 
	for (auto& it : a) cin >> it;
	int pos = n - 1;
	while (pos > 0 && a[pos - 1] >= a[pos]) --pos;
	while (pos > 0 && a[pos - 1] <= a[pos]) --pos;
	cout << pos << endl;
		
}

int main() {
	init();

	int tt; cin >> tt;
	 while (tt--)
		solve();
	
}
