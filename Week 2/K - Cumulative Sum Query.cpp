#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int
#define ld long long double

//#define for for(int i=0; i<n; i++)

#define vec vector<int>
#define pb push_back
#define pii pair<int,int>

#define Test int t;cin >> t;while(t--)
#define Q int q; cin>>q; while(q--)

#define cY cout<<"YES"<<endl
#define cN cout<<"NO"<<endl
#define cy cout<<"Yes"<<endl
#define cn cout<<"No"<<endl
#define c1 cout<<-1<<endl
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// () # & !

int main()
{
    ll n; cin >> n;
    ll a[n];
    for(ll i=0; i<n; i++) cin >> a[i];

    Q{
        ll i,j; cin >> i >> j;
        ll sum=0;
        for(ll k=i; k<=j; k++)
        {
            sum += a[k];
        }
        cout << sum << endl;
    }

    return 0;
}
