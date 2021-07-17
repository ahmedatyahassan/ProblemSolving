

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

void solve()
{

	int N, A, B, C; cin >> N >> A >> B >> C;
	string S; cin >> S;
	string T(N, ' ');
	for (int i = 0; i < N; i++) {
		char c = S[i];
		if (c == 'R') {
			if (B) T[i] = 'P', B--;
		}
		else if (c == 'P') {
			if (C) T[i] = 'S', C--;
		}
		else if (c == 'S') {
			if (A) T[i] = 'R', A--;
		}
	}
	if ((N - (A + B + C)) * 2 >= N) {
		cout << "YES" << '\n';
		for (int i = 0; i < N; i++) {
			if (T[i] == ' ') {
				if (A) T[i] = 'R', A--;
				else if (B) T[i] = 'P', B--;
				else if (C) T[i] = 'S', C--;
			}
		}
		cout << T << '\n';
	}
	else {
		cout << "NO" << '\n';
	}
}

int main() {
	init();

	int tt; cin >> tt;
	while (tt--)
		solve();

}
