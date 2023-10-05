#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define ll long long
#define ld long long double

//#define for for(int i=0; i<n; i++)

#define vec vector<long long>
#define pb push_back
#define pii pair<int,int>

#define Test int t;cin >> t;while(t--)
#define Q int q; cin>>q; while(q--)

#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define c1 cout<<-1<<endl
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


int main()
{
    Test{

        ll n; cin >> n;
        ll add = 0;

        ll a[n];
        for (ll i=1; i<=n; i++){
            cin >> a[i];
            ll indx = add+i;
            if(a[i] > indx)
                add += a[i] - indx;
        }
        cout << add << endl;
    }

    return 0;
}
