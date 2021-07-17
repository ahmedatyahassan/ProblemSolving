

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

bool isPrime(int n)
{
    if (n <= 1)  return false;
    if (n <= 3)  return true;

    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
void solve()
{

    vi allPrimes;
    for (int i = 2; i <= 1e6; i++)
    {
        if (isPrime(i))
            allPrimes.push_back(i);
    }

    ll n, m; cin >> n >> m;
    ll a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    ll mn1 = INT_MAX, mn2 = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        ll ans1 = 0;
        for (int j = 0; j < m; j++)
        {
            int next1 = *lower_bound(all(allPrimes), a[i][j]);
            ans1 += next1 - a[i][j];
        }
        mn1 = min(mn1, ans1);

    }

    for (int i = 0; i < m; i++)
    {
        ll ans2 = 0;
        for (int k = 0; k < n; k++)
        {
            int next2 = *lower_bound(all(allPrimes), a[k][i]);
            ans2 += next2 - a[k][i];
        }
        mn2 = min(mn2, ans2);
    }

    cout << min(mn1, mn2) << "\n";
    
}

int main() {
	init();

	// int tt; cin >> tt;
	// while (tt--)
	solve();
	
}
