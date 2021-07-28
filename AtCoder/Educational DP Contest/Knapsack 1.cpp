

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <stack>

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
const int N = (int)1e7 + 3;	

void init() {
	cin.tie(0);
	cin.sync_with_stdio(0);
}

ll n, cap;
ll w[N], val[N];
ll dp[107][(int)1e6];
ll solve(int idx, int cap)
{
	if (idx == n || cap == 0)
		return 0;
	
	if (dp[idx][cap] != -1)
		return dp[idx][cap];

	ll ans = 0 + solve(idx + 1, cap);

	if (cap >= w[idx])
	{
		ans = max(ans, val[idx] + solve(idx + 1, cap - w[idx]));
	}

	return dp[idx][cap] = ans;
}

int main() {
	init();

	//int tt; cin >> tt;
	//while (tt--)
	cin >> n >> cap;
	for (int i = 0; i < n; i++)
		cin >> w[i] >> val[i];

	memset(dp, -1, sizeof dp);

	cout << solve(0, cap) << "\n";



}
