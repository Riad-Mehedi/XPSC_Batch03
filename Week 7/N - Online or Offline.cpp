#include <iostream>
using namespace std;

int main() {

    int t; cin >> t;
	while (t--)
	{
	    double onl, res; cin >> onl >> res;

	    double discount = onl * 0.1;
	    double onl_price = onl - discount;

	    if (onl_price < res) cout << "ONLINE" << endl;
	    else if (onl_price > res) cout << "DINING" << endl;
	    else cout << "EITHER" << endl;
	}

	return 0;
}

