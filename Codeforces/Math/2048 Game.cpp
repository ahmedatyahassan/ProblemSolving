 
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
	vector<int>vi(n);

	for (int i = 0; i < n; i++)
	{
		cin >> vi[i];
	}
	long long sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (vi[i] <= 2048)
			sum += vi[i];
	}
	
	if (sum >= 2048)
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
