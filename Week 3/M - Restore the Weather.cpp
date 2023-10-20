#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int
#define ld long long double

//#define for for(int i=0; i<n; i++)

#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define pii pair<int,int>

#define Test int t;cin >> t;while(t--)
#define Q int q; cin>>q; while(q--)

#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define c1 cout<<-1<<endl
#define endl "\n"
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


int main()
{
    Test
    {
        int n,k; cin>>n>>k;
        int a[n], b[n], c[n];

        for(int i=0; i<n; i++) cin>>a[i];

        for(int i=0; i<n; i++) cin>>b[i];

        vector<pair<int,int>> v;
        for(int i=0; i<n; i++)
        {
            v.push_back({a[i],i});
        }

        sort(v.begin(), v.end());
        sort(b, b+n);
        for(int i=0; i<n; i++)
        {
            c[v[i].second]=b[i];
        }

        for(int i=0; i<n; i++)
        {
            cout<<c[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}

