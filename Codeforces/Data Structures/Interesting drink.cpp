#include <iostream>
#include <cstring>
#include <math.h>
#include<stdio.h>
#include<string.h>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <queue>
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
const double PI = 3.14159265358979323846;
const int N = 10000007;
const ll MOD = 1000000007;
int dx[] = { 0 , 1 , 0 , -1 };
int dy[] = { 1 , 0 , -1 , 0 };

void init() {
	cin.tie(0);
	cin.sync_with_stdio(0);
}

inline ll getmax(ll x, ll y)
{
	return (x > y) ? x : y;
}
void solve()
{
	int n; cin >> n;
	vector<int>a(n);
	for (int i = 0; i < n; i++) cin >> a[i];

	int q; cin >> q;
	int p = 0;
	sort(all(a));

	while (q--)
	{
		cin >> p;
		cout << upper_bound(a.begin(), a.end(), p) - a.begin() << "\n";
	}
}
int main()
{
	//int tt; cin >> tt;
	//while (tt--)
		solve();

}
