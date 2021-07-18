

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

void init() {
	cin.tie(0);
	cin.sync_with_stdio(0);
}

void solve()
{
	int n, m; cin >> n >> m;
	vi a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	int ans = 0;
	while (m--)
	{
		int sum = 0;
		int l, r; cin >> l >> r;
		for (int i = l - 1; i < r; i++)
		{
			sum += a[i];
		}
		ans += max(0, sum);
	}

	cout << ans << "\n";
}

int main() {
	init();

	// int tt; cin >> tt;
	// while (tt--)
		solve();

}
