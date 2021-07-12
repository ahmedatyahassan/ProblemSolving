 
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;

void init() {
	cin.tie(0);
	cin.sync_with_stdio(0);
}

void solve()
{
	int l, r; cin >> l >> r;
	
	int ans = 0;
	int d2 = 2, d3 = 3;
	if (l == r)
		cout << l << "\n";
	else if ( (r / d2) - (l - 1) / 2 > (r / d3) - (l - 1) / d3)
		cout << d2 << "\n";
	else
		cout << d3 << "\n";
	
}

int main() {
	init();
	solve();
}
