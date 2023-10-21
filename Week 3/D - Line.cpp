#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int
#define ld long long double

//#define for for(int i=0; i<n; i++)

#define vi vector<int>
#define pb push_back
#define pii pair<int,int>

#define Test int t;cin >> t;while(t--)
#define Q int q; cin>>q; while(q--)

#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define c1 cout<<-1<<endl
#define nl cout<<"\n"
#define endl "\n"
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


int main()
{
    Test
    {
        ll n; cin>>n;
        string s; cin>>s;
        int a[n];
        ll c=0;

        for(int i=0; i<n; i++)
        {
            if(s[i] == 'L') a[i]=i;
            else a[i] = n-1-i;
            c += a[i];
        }

        sort(a,a+n);
        for(int i=0; i<n; ++i)
        {
            if(n-1-2*a[i] > 0) c += n-1-2*a[i];
            cout << c << " ";
        }
        cout << endl;
    }

    return 0;
}


