#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){

        int a; cin >> a;
        string s;
        cin >> s;

        string str = "Timur";

        sort(s.begin(), s.end());
        sort(str.begin(), str.end());

        if(s == str) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
