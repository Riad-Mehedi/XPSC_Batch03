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
    ll n,x; cin >> n >> x;
    vec v;
    for(ll i=0; i<n; i++)
    {
        ll a; cin >> a;
        if(a==x) continue;
        else v.pb(a);
    }

    for(auto it : v) cout << it << " ";
    cout << endl;

    return 0;
}
