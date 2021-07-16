 
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef vector<pii> vii;
typedef vector<bool> vb;
typedef vector<string> vs;

void init() {
	cin.tie(0);
	cin.sync_with_stdio(0);
}

void solve()
{
	int n; cin >> n;
	string s; cin >> s;
	string a = "1", b = "1";
	for (int i = 1; i < n; i++)
	{
		if (s[i] - '0' == 2)
		{
			if (a > b)
				a += '0', b += '2';
			else if (a < b)
				b += '0', a += '2';
			else
				a += '1', b += '1';
		}
		else if (s[i] - '0' == 1)
		{
			if (a >= b)
				a += '0', b += '1';
			else
				b += '0', a += '1';
		}
		else
			a += '0', b += '0';
	}

	cout << a << " \n";
	cout << b << "\n";
}

int main() {
	init();

	int tt; cin >> tt;
	while (tt--)
		solve();
	
}
