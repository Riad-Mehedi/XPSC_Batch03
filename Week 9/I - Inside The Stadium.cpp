#include <bits/stdc++.h>
using namespace std;

int main() {

	int t; cin >> t;
	while(t--){
	    int n; cin >> n;
	    int sum = 0, cnt = 0;

	    int a[n];
	    for (int i=1; i<=n; i++){
	        cin >> a[i];
	        sum += a[i];
	        if (sum == i) cnt++;
	    }

	    cout << cnt << endl;
	}

	return 0;
}
