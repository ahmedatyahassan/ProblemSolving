#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;



int main() {
    
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<pair<int, int>>a;

        vector<long long>freq(n, 0);

        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            a.push_back({ x , i + 1 });
        }

        sort(a.begin(), a.end());


        freq[0] = a[0].first;
        for (int i = 1; i < n; i++) freq[i] = a[i].first + freq[i - 1] * 1LL;

        vector<int>ans;
        ans.push_back(a[n - 1].second);
        for (int i = n - 2; i >= 0; i--)
        {
            if (freq[i] >= a[i + 1].first)
                ans.push_back(a[i].second);
            else
                break;
        }

        sort(ans.begin(), ans.end());

        cout << ans.size() << "\n";

        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        cout << "\n";
    }
    
    return 0;
}
