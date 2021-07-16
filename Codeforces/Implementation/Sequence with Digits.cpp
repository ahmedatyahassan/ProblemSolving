

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

pair<ll,ll> min_max(ll n)
{
	ll mx = -1;
	ll mn = 10e19;

	while (n)
	{
		mn = min(mn, n % 10);
		mx = max(mx, n % 10);
		n /= 10;
	}

	return { mn , mx };
}

void solve()
{
	ll n;
	ll k;
	cin >> n >> k;
	ll ans = 0;

	
	for (ll i = 2; i <= k; i++)
	{
		pair<ll, ll> pi = min_max(n);
		if (pi.first * pi.second == 0)
			break;
		n += pi.first * pi.second;
	}

	cout << n << "\n";
}

int main() {
	init();

	int tt; cin >> tt;
	 while (tt--)
		solve();
	
}
