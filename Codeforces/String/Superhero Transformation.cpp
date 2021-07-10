 
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;

bool isVowel(char c)
{
	return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

void solve()
{

	string s, t; cin >> s >> t;
	if (s.size() != t.size())
	{
		cout << "No \n";
		return;
	}
	
	for (int i = 0; i < s.size(); i++)
	{
		if (isVowel(s[i]) != isVowel(t[i]))
		{	
			cout << "No \n";
			return;
		}
	}
	cout << "Yes \n";
}

int main() {

	solve();
}
