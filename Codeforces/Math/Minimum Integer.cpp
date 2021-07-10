 
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;

void solve()
{
	long long l, r, d; cin >> l >> r >> d;
	
	if (d < l || d > r)
	{
		cout << d << "\n";
	}
	else
	{
		cout << (r / d) * d + d << "\n";
	}

}

int main() {

	int tt; cin >> tt;
	while (tt--)
		solve();
}
