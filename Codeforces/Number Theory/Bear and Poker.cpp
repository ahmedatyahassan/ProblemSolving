

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;
#define all(c) c.begin(), c.end()

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
    vi a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        while (a[i] % 2 == 0) a[i] /= 2;
        while (a[i] % 3 == 0) a[i] /= 3;
    }


    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] != a[i])
        {
            cout << "NO \n";
            return;
        }
    }

    cout << "YES \n";
    
}

int main() {
	init();

	// int tt; cin >> tt;
  // while (tt--)
        solve();
	
}
