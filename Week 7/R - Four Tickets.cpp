#include <iostream>
using namespace std;

int main() {

	int t; cin >> t;
	while (t--)
	{
	    int n; cin >> n;
	    int ans = n*4;

	    if (ans <= 1000) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}

	return 0;
}
