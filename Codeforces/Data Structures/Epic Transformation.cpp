#include <iostream>
#include <list>
#include <cstring>
#include <math.h>
#include<stdio.h>
#include <sstream>
#include <string.h>
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
const int N = 100005;
const ll MOD = 1000000007;
int dx[] = { 0 , 1 , 0 , -1 };
int dy[] = { 1 , 0 , -1 , 0 };

void init() {
	cin.tie(0);
	cin.sync_with_stdio(0);
}

long long power(ll n, ll k)
{
	if (k == 0) return 1;
	ll sq = (power(n, k / 2));
	sq = (sq * sq);
	if (k % 2 == 1)
		sq = (sq * n);
	return sq;
}
bool isPrime(ll n)
{
	if (n <= 1)  return false;
	if (n <= 3)  return true;

	if (n % 2 == 0 || n % 3 == 0) return false;

	for (int i = 5; i * i <= n; i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;

	return true;
}

string to_binary(int x)
{
	string s;
	while (x > 0)
	{
		s += (x % 2 ? '1' : '0');
		x /= 2;
	}
	reverse(s.begin(), s.end());
	return s;
}


void solve()
{
	int n;
	cin >> n;
	map<int, int> mp;
	for (int i = 0; i < n; ++i) {
		int a;
		cin >> a;
		mp[a]++;
	}
	int mx = 0;
	for(auto i : mp){
		mx = max(mx, i.second);
	}
	int k = n - mx;
	cout << max(n % 2, mx - k) << endl;
     
}
int main()
{
	init();
	int tt; cin >> tt;
	while (tt--)
		solve();

	
}
 
