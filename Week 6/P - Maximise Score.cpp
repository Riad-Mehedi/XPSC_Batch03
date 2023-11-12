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
    int n; cin >> n;

    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];

    int diff[n];
    diff[0] = abs(a[1]-a[0]);
    diff[n-1] = abs(a[n-1]-a[n-2]);

    for( int i=1; i<=n-2; i++ )
    {
        int d1 = abs(a[i+1]-a[i]);
        int d2 = abs(a[i]-a[i-1]);
        diff[i] = max(d1,d2);

    }

    int *ans =min_element(diff,diff+n);
    cout << *ans << endl;
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

