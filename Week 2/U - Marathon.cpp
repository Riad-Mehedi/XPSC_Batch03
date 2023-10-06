#include<bits/stdc++.h>
using namespace std;

#define TC int t; cin >> t; while(t--)
#define ll long long int
#define pb push_back
#define cy cout << "YES" << endl;
#define cn cout << "NO" << endl;

int main()
{
    TC{
        int a, b, c, d; cin >> a >> b >> c >> d;

        int cnt = 0;
        if( a<b ) cnt++;
        if( a<c ) cnt++;
        if( a<d ) cnt++;

        cout << cnt << endl;

    }

    return 0;
}
