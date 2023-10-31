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
    ll n,k,i; cin >> n >> k;
    ll c = 0;
    map< ll,vector<ll> > mp;

    for( i=0; i<n; i++ )
    {
        ll x; cin >> x;
        mp.insert( {x,{}} );
        mp[x].push_back(i);

    }
    for( i=0; i<k; i++ )
    {
        ll x,y; cin >> x >> y;
        ll hi,lo;

        if( mp.find(x) != mp.end() && mp.find(y) != mp.end() )
        {
            hi = mp[y][mp[y].size()-1];
            lo = mp[x][0];

            if( hi>lo ) YES;
            else NO;
        }
        else NO;
    }
}

int main()
{
    FAYAZ

    Test{
        solve();
    }

    HUMAIRA;
}

