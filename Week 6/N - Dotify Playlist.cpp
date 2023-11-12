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

}

int main()
{
    FAYAZ

    Test
    {
        //solve();
        int n,k,l;
        cin >> n >> k >> l;
        vector <int> v;
        int cnt=0;

        for(int i=0; i<n; i++)
        {
            int x,y;
            cin >> x >> y;
            if(y==l)
            {
                cnt++;
                v.pb(x);
            }
        }

        sort(v.begin(),v.end(),greater<int>());
        ll sum=0;

        if(v.size()<k)
        {
            cout << -1 << '\n';
            continue;
        }
        for(int i=0; i<k; i++)
        {
            sum+=v[i];
        }
        cout << sum << endl;
    }

    HUMAIRA;
}

