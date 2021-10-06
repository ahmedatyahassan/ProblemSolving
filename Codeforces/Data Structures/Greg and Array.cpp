#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <string.h>
#include<algorithm>
#include <numeric>      // std::accumulate
#include <iomanip>      // std::setprecision
#include<cmath>
#include <string>

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
#define IOS          ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const double PI = 3.14159265358979323846;
const int N = 1e6;
const ll MOD = 1000000007;
int dx[] = { 0 , 1 , 0 , -1 };
int dy[] = { 1 , 0 , -1 , 0 };

bool cmp(const pair<int, int>& a, const pair<int, int>& b)
{
    return (b.second > a.second);
}

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
long long power(ll n, ll k)
{
    if (k == 0) return 1;
    ll sq = (power(n, k / 2));
    sq = (sq * sq);
    if (k % 2 == 1)
        sq = (sq * n);
    return sq;
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
string to_binary(int x)
{
    string s;
    while (x > 0)
    {
        s += (x % 2 ? '1' : '0');
        x /= 2;
    }
    reverse(s.begin(), s.end());
    return s;
}
bool isPerfect(ll x)
{
    if (x < 1)
        return false;
    ll root(round(sqrt(x)));
    return x == root * root * 1LL;
}
bool valid(int i, int j, int n, int m)
{
    return i >= 0 && i < n&& j >= 0 && j < m;
}

ll FastPower(ll x, ll y) {
    return(!y ? 1 : (((y & 1) ? x : 1) % MOD * FastPower((x % MOD) * (x % MOD) % MOD, y >> 1) % MOD) % MOD);
}

ll sumDigits(ll n)
{
    int res = 0;
    while (n > 0) {
        res += n % 10;
        n /= 10;
    }
    return res;
}

struct p {
    long long l, r, d;
};
long long arr[123456];
long long cnt[123456];
long long sum[123456];
p op[123456];

void solve()
{
    long long n, m, k, x, y;
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++) cin >> arr[i];
    for (int i = 1; i <= m; i++)
    {
        cin >> op[i].l >> op[i].r >> op[i].d;
    }
    for (int i = 0; i < k; i++)
    {
        cin >> x >> y;
        cnt[x]++;
        cnt[y + 1]--;
    }
    for (int i = 0; i <= 1e5 + 5; i++) cnt[i] += cnt[i - 1];

    for (int i = 1; i <= m; i++)
    {
        sum[op[i].l] += (cnt[i] * op[i].d);
        sum[op[i].r + 1] -= (cnt[i] * op[i].d);
    }
    for (int i = 1; i <= 1e5 + 5; i++) sum[i] += sum[i - 1];

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] + sum[i] << " ";
    }
    cout << endl;
   
}
        



int main()
{
    IOS;

    int t = 1; // cin >> t;
    while (t--)  solve();   

}
