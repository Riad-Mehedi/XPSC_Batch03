#include <iostream>
using namespace std;

int main() {

    int t; cin >> t;
    while (t--){
        int a, b; cin >> a >> b;
        int mult = a*15;
        int com = 2*b;

        if (mult >= com) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

	return 0;
}
