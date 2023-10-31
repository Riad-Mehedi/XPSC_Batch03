#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

//#define for for(int i=0; i<n; i++)

#define FAYAZ ios::sync_with_stdio(0); cin.tie(0);
#define HUMAIRA return 0

#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define pb push_back
#define pii pair<int,int>

#define Test int t;cin >> t;while(t--)
#define Q int q; cin>>q; while(q--)

#define YES cout<<"YES"<< '\n'
#define NO cout<<"NO"<< '\n'
#define Yes cout<<"Yes"<< '\n'
#define No cout<<"No"<< '\n'
#define endl "\n"
#define nl cout<<"\n"
#define c1 cout<<-1<< '\n'
#define c0 cout<<0<< '\n'

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void solve()
{
    ll n,m,h,i;
    cin >> n >> m >> h;

    ll c[n];
    for(i=0; i<n; i++) cin >> c[i];

    ll o[m];
    for(i=0; i<m; i++) cin >> o[i];

    sort( c,c+n,greater<ll>() );
    sort( o,o+m,greater<ll>() );

    ll ans=0;
    for( i=0; i<min(n,m); i++ )
    {
        ans += min( c[i], o[i]*h );
    }
    cout << ans << endl;
}

int main()
{
    FAYAZ

    Test{
        solve();
    }

    HUMAIRA;
}
