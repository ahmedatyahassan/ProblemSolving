 
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
	int n; cin >> n;
	int f = 1;
	int l = (n - (f * 2)) / 2;
	// f = 1 , l = 4

	if (l == f)
		cout << 0 << "\n";
	else if(ceil((l + f) / 2.0) > (l + f) / 2)
		cout << (l + f) / 2  << "\n";
	else
		cout << (l + f) / 2 - 1 << "\n";

}

int main() {
	init();
		solve();
	
}
