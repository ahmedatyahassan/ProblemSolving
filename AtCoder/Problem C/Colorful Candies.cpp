

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
	int n, k; cin >> n >> k;
	v a(n);
	for (int i = 0; i < n; i++) cin >> a[i];

	map<int, int>m;

	for (int i = 0; i < k; i++) m[a[i]]++;

	int ans = sz(m);

	for (int i = k; i < n; i++)
	{
		m[a[i]]++;
		m[a[i - k]]--;
		if (m[a[i - k]] == 0) m.erase(a[i - k]);
		ans = max(ans, sz(m));
	}

	cout << ans << "\n";
	
}

int main() {
	init();

	// int tt; cin >> tt;
	// while (tt--)
		solve();

}
