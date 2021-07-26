

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
	int n, m; cin >> n >> m;
	string s; cin >> s;
	vector<int> a(n + 1, 0);
	int x = 0;
	while (m--)
	{
		cin >> x;
		a[0]++;
		a[x]--;
	}

	for (int i = 1; i < n; i++)
		a[i] += a[i - 1];
	for (int i = 0; i < n; i++) a[i]++;

	vector<int>ans(26 , 0);
	for (int i = 0; i < n; i++)
		ans[s[i] - 'a'] += a[i];

	for (int i = 0; i < 26; i++)
		cout << ans[i] << (i < 25 ? ' ' : '\n');
}
int main() {
	init();

	int tt; cin >> tt;
	while (tt--)
		solve();

}
