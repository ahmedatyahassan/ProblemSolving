
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

int n;
int h[N];
int dp[N + 1];

int solve(int idx)
{
	if (idx == n - 1)
		return 0;


	if (dp[idx] != -1)
		return dp[idx];

	int ans = abs(h[idx] - h[idx + 1]) + solve(idx + 1);

	if (idx != n - 2)
		ans = min(ans, abs(h[idx] - h[idx + 2]) + solve(idx + 2));
	

	return dp[idx] = ans;
}
int main() {
	init();

	//int tt; cin >> tt;
	//while (tt--)
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> h[i];
	memset(dp, -1, sizeof dp);
	
	cout << solve(0) << "\n";

}
