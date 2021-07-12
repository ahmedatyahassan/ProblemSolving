

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

int sumOfDigits(int n) {
	int ans = 0;
	while (n > 0) ans += n % 10, n /= 10;
	return ans;
}

void solve()
{
	int ans, sum = 0; string s;
	cin >> s;
	ans = (s.size() > 1);
	for (char c : s) sum += c - '0';
	while (sum > 9) sum = sumOfDigits(sum), ++ans;
	cout << ans << endl;
	
}

int main() {
	init();
	solve();
}
