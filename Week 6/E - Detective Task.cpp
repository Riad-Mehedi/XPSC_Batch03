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
//#define c1 cout<<-1<< '\n'
#define c0 cout<<0<< '\n'

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


void solve()
{
    string s;
    cin >> s;
    ll c1 = 0, c2 = s.size() - 1;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            c1 = i;
        }
    }
    for (ll i = s.size() - 1; i >= c1; i--)
    {
        if (s[i] == '0')
        {
            c2 = i;
        }
    }
    cout << c2 - c1 + 1 << endl;
}

int main()
{
    FAYAZ

    Test{
        solve();
    }

    HUMAIRA;
}
