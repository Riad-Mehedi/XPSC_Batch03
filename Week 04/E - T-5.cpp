#include<bits/stdc++.h>
using namespace std;

#define ll long long

//#define for for(int i=0; i<n; i++)

#define vi vector<int>
#define vll vector<long long>
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


vll p;
signed PreSet()
{
    for(ll i=0; i<(1<<15); i++)
    {
        string s = to_string(i);
        string x = s;
        reverse(x.begin(), x.end());
        if(s == x) p.push_back(i);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    PreSet();
    Test
    {
        ll n; cin >> n;
        vll a(n);
        unordered_map <ll, ll> m;
        for(ll i=0; i<n; i++) cin >> a[i];
        ll ans = 0;
        for(ll i : a)
        {
            m[i]++;
            for(ll j : p)
            {
                ans += m[(i^j)];
            }
        }
        cout << ans << endl;
    }

    return 0;
}
