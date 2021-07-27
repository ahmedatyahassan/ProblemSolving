 
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
ll MOD = 1e9 + 7;

void init() {
	cin.tie(0);
	cin.sync_with_stdio(0);
}


void solve()
{
	int n; cin >> n;
	string s; cin >> s;
	vector<int>a(10);

	for (int i = 0; i < 9; i++)
		cin >> a[i];

	
	for (int i = 0; i < n; i++)
	{
		if (a[(s[i] - '0') - 1] > (s[i] - '0'))
		{
			
			int j = i;
			while (j < n && a[(s[j] - '0') - 1] >= (s[j] - '0'))
			{
				s[j] = a[(s[j] - '0') - 1] + '0';
				j++;
			}
			break;
		}
	}

	cout << s << "\n";
}
int main() {
	init();

	//int tt; cin >> tt;
	//while (tt--)
		solve();

}
