 
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
int sn, tn;
string s, t;
bool run(int i, int j)
{
	int cnt = 0;

	for (int o = i; o <= j; o++)
	{
		if (cnt == tn)
			return true;
		
		if (t[cnt] != s[o])
			return false;
		cnt++;
	}

	for (int o = j - 1; o >= 0; o--)
	{
		if (cnt == tn)
			return true;

		if (t[cnt] != s[o])
			return false;

		cnt++;
	}

	if (cnt == tn)
		return true;
	else
		return false;
}

void solve()
{
	cin >> s >> t;

	sn = sz(s);
	tn = sz(t);
	
	bool can = false;

	for (int i = 0; i < sn; i++)
	{
		for (int j = i; j < sn; j++)
		{
			if (run(i, j))
			{
				can = true;
				break;
			}
		}
		if (can)
			break;
	}

	if (can)
		cout << "YES \n";
	else
		cout << "NO \n";
}
int main() {
	init();

	int tt; cin >> tt;
	while (tt--)
		solve();

}
