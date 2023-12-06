#include <bits/stdc++.h>
using namespace std;

int main() {

	int t; cin >> t;
	while(t--){
	    int a,b,c; cin >> a >> b >> c;
        int divi = a/2;
        int odd = divi + 1;

        if (a%2 == 0) cout << (divi*b) + (divi*c) << endl;
        else cout << (divi*b) + (odd*c) << endl;
	}

	return 0;
}
