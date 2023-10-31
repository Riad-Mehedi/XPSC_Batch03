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

#define Test int t;cin >> t; while(t--)
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
    int n, i; cin >> n;
    vs v(n);
    map<string, int> mp;
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }

    string ans = "";

    for (i = n - 1; i >= 0; i--)
    {
        int sz = v[i].size();

        if (mp[v[i]] > 0)
        {
            string tmp = v[i];
            ans = ans + tmp[sz - 2] + tmp[sz - 1];
            mp[v[i]] = 0;
        }
    }
    cout << ans << endl;
}

int main()
{
    FAYAZ

    //Test{
        solve();
    //}

    HUMAIRA;
}
