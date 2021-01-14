
#include <iostream>
#include <algorithm>
using namespace std;

int solve()
{
    string str; cin >> str;

    int maxInt = 0;
    for (int i = 0; i < str.length(); i++)
    {
        maxInt = max(str[i] - '0', maxInt);
    }
    return maxInt;
}

int main()
{
    cout << solve();
}
