 
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
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
	ll n, k; cin >> n >> k;

	ll ans = ((k - 1) / (n - 1)) + k;
	
	cout << ans << "\n";



}

int main() {
	init();

	int tt; cin >> tt;
	while (tt--)
		solve();
	
}
