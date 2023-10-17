#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int
#define ld long long double

//#define for for(int i=0; i<n; i++)

#define vi vector<int>
#define pb push_back
#define pii pair<int,int>

#define Test int t;cin >> t;while(t--)
#define Q int q; cin>>q; while(q--)

#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define c1 cout<<-1<<endl
#define endl "\n"
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


int main()
{
    Test
    {
        ll n; cin >> n;
        ll x = 0;
        for(ll i=0; i<n; i++)
        {
            ll a; cin >> a;
            x = x^a;
        }
        if(n%2 == 0)
        {
            if(x == 0) cout << 0 << endl;
            else cout << -1 << endl;
        }
        else
        {
            cout << x << endl;
        }
    }

    return 0;
}

