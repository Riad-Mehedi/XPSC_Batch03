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
    int n; cin >> n;
    ll b = 0;

    int a[n+1];
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b += abs(a[i]);
    }

    int c = 0;
    for(int i = 1; i <= n; i++)
    {
        if(a[i] < 0)
        {
            c += 1;
            while(i <= n && a[i] <= 0)
            {
                i += 1;
            }
        }
    }
    cout << b << ' ' << c << endl;
}

int main()
{
    FAYAZ

    Test{
        solve();
    }

    HUMAIRA;
}
