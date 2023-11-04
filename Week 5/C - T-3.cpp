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

bool isValid (int mid, int a[], int n, int c)
{
    int cnt = 1;
    int last = 0;

    for ( int i=1; i<n; i++)
    {
        if ( abs( a[i] - a[last] ) >= mid )
        {
            cnt++;
            last = i;
        }
    }
    return cnt >= c;
}

void solve()
{
    int n,c,i; cin >> n >> c;

    int a[n];
    for ( i=0; i<n; i++ ) cin >> a[i];
    sort ( a, a+n );

    int l = 0, r = INT_MAX;
    int ans;
    while ( l <= r)
    {
        int mid = l + (r-l)/2;

        if ( isValid(mid, a, n, c) )
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << ans << endl;
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

