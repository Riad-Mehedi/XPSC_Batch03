#include <iostream>
using namespace std;

int main() {

	int t; cin >> t;
	while (t--)
	{
	    int a,b; cin >> a >> b;

	    int total_ball = b*6;
	    int ans = 6*total_ball;

	    if (ans >= a) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}

	return 0;
}
