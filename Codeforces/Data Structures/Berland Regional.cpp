#include <iostream>
#include <vector>
#include <map>
#include <sstream>
#include <algorithm>
#include <deque>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using vb = vector<bool>;
using pii = pair<double, long double>;
using vii = vector<pii>;
using vs = vector<string>;
#define all(x) x.begin(), x.end()
#define ll long long

void init() {
    cin.tie(0);
    cin.sync_with_stdio(0);
}

string int_to_str(int x) {
    stringstream ss;
    ss << x;
    return ss.str();
}


void solve()
{
    int n; cin >> n;
    vi u(n), s(n);
    for (int i = 0; i < n; ++i) {
        cin >> u[i]; u[i]--;
    }
    vvl uni(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
        uni[u[i]].push_back(s[i]);
    }
    for (int i = 0; i < n; ++i) {
        sort(uni[i].rbegin(), uni[i].rend());
        for (int j = 1; j < uni[i].size(); ++j) {
            uni[i][j] += uni[i][j - 1] * 1ll;
        }
    }
    vl ans(n + 1);
    for (auto& cu : uni) {
        for (int k = 1; k <= cu.size(); ++k) {
            int tot = cu.size() - (cu.size() % k);
            ans[k] += cu[tot - 1];
        }
    }

    for (int i = 1; i <= n; ++i) {
        cout << ans[i] << " \n"[i == n];
    }


}

int main()
{
    init();
    int tt; cin >> tt;
    while (tt--)    
        solve();
   
   //  solve();
}
 
