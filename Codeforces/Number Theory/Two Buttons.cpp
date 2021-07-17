

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;
#define ALL(c) c.begin(), c.end()

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

	int n, m, Counter = 0;
	cin >> n >> m;
	while (m > n)
	{
		if (m % 2 == 0) { m /= 2; }
		else { m++; }
		Counter++;
	}
	cout << Counter + (n - m);
    
}

int main() {
	init();

	// int tt; cin >> tt;
	// while (tt--)
	solve();
	
}
