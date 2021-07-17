

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;
#define ll           long long
#define all(v)       (v).begin() , (v).end()
#define v           vector <int>
#define vi           vector <ll>
#define vii          vector <pair<ll,ll>>
#define ii           pair<ll,ll>
#define sz(v)	     ((int)((v).size()))
#define lp(i,a,b)    for(int i=a;i<b;i++)
#define pb           push_back
#define pf           push_front
#define F            first
#define S            second
#define EPS			 1e-9
#define endl         "\n"

void init() {
	cin.tie(0);
	cin.sync_with_stdio(0);
}

bool isPerfect(ll x)
{
    if (x < 2)
        return false;
    ll root(round(sqrt(x)));
    return x == root * root;
}
void solve()
{

    ll n; cin >> n;
    vi a;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            a.pb(i);
            if (i != n / i)
                a.push_back(n / i);
        }
    }
    sort(all(a));
    vi perferct;
    for (int i = 0; i < sz(a); i++)
    {
        if (isPerfect(a[i]))
            perferct.pb(a[i]);
    }
  
    for (int i = sz(a) - 1; i >= 0; i--)
    {
        bool flg = false;
        for (int j = 0; j < sz(perferct); j++)
        {
            if (a[i] % perferct[j] == 0)
            {
                flg = true;
                break;
            }
        }
        if (flg == false)
        {
            cout << a[i] << "\n";
            return;
        }
    }
    
}

int main() {
	init();

	int tt; cin >> tt;
    // while (tt--)
    //    solve();
	
}
