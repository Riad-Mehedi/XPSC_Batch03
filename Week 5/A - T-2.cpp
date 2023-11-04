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

    vi v(n);
    for ( int i=0; i<n; i++ ) cin >> v[i];

    Q
    {
        int a; cin >> a;

        auto it1 = lower_bound( v.begin(), v.end(), a);
        int indx_of_lb = it1 - v.begin();
        int indx1 = it1 - v.begin() - 1;

        auto it2 = upper_bound( v.begin(), v.end(), a);
        int indx2 = it2 - v.begin();

        if ( indx_of_lb != 0 && indx2 < n) cout << v[indx1] << " " << v[indx2] << endl;
        else if ( indx_of_lb == 0 && indx2 < n) cout << "X " << v[indx2] << endl;
        else cout << v[indx1] << " X" << endl;
    }
}

int main()
{
    FAYAZ

    //Test
    //{
    solve();
    //}

    HUMAIRA;
}
