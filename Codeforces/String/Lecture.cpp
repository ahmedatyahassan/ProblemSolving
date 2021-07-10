 
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;

void solve()
{
	int n, m; cin >> n >> m;
	map<string, string>a, b;

	for (int i = 0; i < m; i++) {
		string x, y; cin >> x >> y;
		a[x] = y;
		b[y] = x;
	}

	string ans = "";
	for (int i = 0; i < n; i++) {
		string text; cin >> text;
		if (a.find(text) != a.end()){
			if (a[text].size() < text.size())
				cout << a[text] << " ";
			else
				cout << text << " ";
		}
		else {
			if (b[text].size() <= text.size())
				cout << b[text] << " ";
			else
				cout << text << " ";
		}

	}

}

int main() {

	solve();
}
