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
    int n,h,m,x,y,ans;
    cin >> n >> h >> m;
    ans = 1440;
    int start = h*60 + m;

    while(n--)
    {
         cin >> x >> y;
         int temp = x*60 + y;

         if( temp < start )
         {
             temp += 24*60;
         }
           ans = min(ans, temp-start);
    }
    cout << ans/60<< " " << ans%60 << endl;
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
