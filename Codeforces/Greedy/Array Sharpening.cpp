 
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
	int n; cin >> n;
	v a(n);
	bool sol = true;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	
	int pre = 0, suf = n;
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= i) pre = i;
		else break;
	}
	for (int i = n - 1; i >= 0; i--)
	{
		if (a[i] >= n - i - 1) suf = i;
		else break;
	}

	if (pre >= suf) cout << "Yes\n";
	else cout << "No\n";
}
int main() {
	init();

	int tt; cin >> tt;
	while (tt--)
		solve();

}
