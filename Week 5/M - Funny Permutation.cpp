#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

//#define for for(int i=0; i<n; i++)

#define FAYAZ ios::sync_with_stdio(0); cin.tie(0);

#define vi vector<int>
#define vll vector<long long>
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


signed main()
{
    FAYAZ

    Test
    {
        int n; cin >> n;
        if(n == 3) cout << "-1" << '\n';
        else
        {
            if(n & 1)
            {
                for(int i = n; i >= n / 2 + 2; i--)
                {
                    cout << i << ' ';
                }
                for(int i = 1; i <= n / 2 + 1; i++)
                {
                    cout << i << ' ';
                }
                nl;
            }
            else
            {
                for(int i = 1; i <= n; i += 2)
                {
                    cout << i + 1 << ' ' << i << ' ';
                }
                nl;
            }
        }
    }

    return 0;
}
