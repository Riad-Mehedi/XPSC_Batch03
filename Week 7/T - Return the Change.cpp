#include <bits/stdc++.h>
using namespace std;

int main() {

	int t; cin >> t;
	while (t--)
	{
	    double n; cin >> n;
	    double cents = n/10;
	    double ansRound = round(cents);
	    double ans = ansRound*10;
	    cout << 100-ans << endl;
	}

	return 0;
}
