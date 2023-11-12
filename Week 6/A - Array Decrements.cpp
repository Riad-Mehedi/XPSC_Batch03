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
    long long n; cin >> n;

    long long a[n],b[n];
    for(int i=0; i<n; i++) cin>> a[i];
    for(int i=0; i<n; i++) cin >> b[i];

    long long diff = 0;
    for(int i=0; i<n; i++)
        diff = max( diff,(a[i]-b[i]) );

    long long e = 0;
    for(int i=0; i<n; i++)
        a[i] = max( e,(a[i]-diff) );

    int f = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i]!=b[i])
        {
            f=1;
            break;
        }
    }

    if(f == 1) NO;
    else YES;
}

int main()
{
    FAYAZ

    Test
    {
        solve();
    }

    HUMAIRA;
}
