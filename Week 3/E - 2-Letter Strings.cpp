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
        map<char, ll> m1, m2;
        map<string, ll> m;

        ll ans = 0;
        for(ll i=0; i<n; i++)
        {
            string s; cin >> s;
            ans += m1[s[0]] + m2[s[1]] - 2 * m[s];
            m[s]++ ;
            m1[s[0]]++ ;
            m2[s[1]]++;
        }
        cout << ans << endl;
    }

    return 0;
}
