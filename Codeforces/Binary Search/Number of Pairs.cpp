

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <stack>

using namespace std;
#define ll           long long
#define all(v)       (v).begin() , (v).end()
#define v           vector <int>
#define vi           vector <ll>
#define vii          vector <pair<ll,ll>>
#define ii           pair<ll,ll>
#define sz(v)	     ((int)((v).size()))
#define lp(i,a,b)    for(int i=a;i<b;i++)
#define pb           push_back
#define pf           push_front
#define F            first
#define S            second
#define EPS			 1e-9
#define endl         "\n"
ll MOD = 1e9 + 7;

void init() {
	cin.tie(0);
	cin.sync_with_stdio(0);
}


void solve()
{
	int n, l, r; cin >> n >> l >> r;

	v a(n);
	for (int i = 0; i < n; i++) cin >> a[i];

	sort(all(a));

	ll ans = 0;

	for (int i = 0; i < n; i++)
	{
		ans += upper_bound(a.begin() + i + 1, a.end(), r - a[i]) - lower_bound(a.begin() + i + 1, a.end(), l - a[i]);
	}

	cout << ans << "\n";
	
}
int main() {
	init();

	int tt; cin >> tt;
	while (tt--)
		solve();

}
