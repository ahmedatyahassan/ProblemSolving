#include <iostream>
#include <list>
#include <cstring>
#include <math.h>
#include<stdio.h>
#include <sstream>
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

string int_to_str(ll x) {
	stringstream ss;
	ss << x;
	return ss.str();
}



void solve()
{
	int n, k; cin >> n >> k;
	map<int, vector<int>>idx;
	int x = 0;
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (idx[x].size() < k)
			idx[x].push_back(i);
	}

	int m = 0;
	for (auto vec : idx) m += vec.second.size();
	m -= m % k;

	int paint = 0;
	bool ok = 0;
	vector<int>painted(n, 0);
	for (auto vec : idx)
		for (auto pos : vec.second)
		{
			painted[pos] = ++paint;
			paint %= k;
			m--;
			if (m == 0)
			{
				for (int i = 0; i < n; i++)
					cout << painted[i] << " ";
				cout << "\n";
				return;
			}
		}
		
	
	
}
int main()
{
	//freopen("ghanophobia.in", "r", stdin);
	int t; cin >> t;
	for (int tt = 1; tt <= t; tt++)
	{
		solve();
	}
}
