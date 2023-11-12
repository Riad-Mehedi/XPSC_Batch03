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

const int MOD = 1e9+7;

void solve()
{
    int n, k;
    cin >> n >> k;
    ll count = 1;

    for (int i = 0; i < n; i++)
    {
        if(k > 0)
        {
            count = (count * k) % MOD;
            k--;
        }
        else
            break;
    }

    cout << count << '\n';
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

