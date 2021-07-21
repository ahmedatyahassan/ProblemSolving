

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

ll calcmax(ll n, ll m) {
	ll x = 0; while (x * (x - 1) / 2 < m) ++x;
	return n - x;
}
void solve()
{
	ll n, m; cin >> n >> m;

	cout << max(0LL, n - (m * 2)) << " " << calcmax(n, m) << "\n";
	
}

int main() {
	init();

	// int tt; cin >> tt;
	// while (tt--)
		solve();

}
