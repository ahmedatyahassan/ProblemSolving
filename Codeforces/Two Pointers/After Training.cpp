#include <iostream>
#include <list>
#include <cstring>
#include <math.h>
#include<stdio.h>
#include <sstream>
#include <string.h>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <unordered_map>
#include <stack>
 
using namespace std;

void solve()
{
	int n, m;
	cin >> n >> m;
	int md = (m + 1) / 2, st = md - 1, ed = md + 1;
	bool shift = m % 2;
	vector<int> seq;
	seq.push_back(md);
	while (st >= 1 || ed <= m) {
		if (shift)
			seq.push_back(st), --st;
		else
			seq.push_back(ed), ++ed;
		shift ^= 1;
 
	}
	for (int i = 0; i < n; ++i)
		cout << seq[i % m] << "\n";
}
int main()
{
	init();
	solve();
	
}
