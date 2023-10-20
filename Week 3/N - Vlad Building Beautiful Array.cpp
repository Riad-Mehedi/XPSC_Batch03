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
        int n, odd=0, even=0;
        cin>>n;
        vector<int>v(n);

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            if(v[i]%2==0)even++;
            else odd++;
        }

        if(even==n || odd==n) cout<<"YES\n";
        else
        {
            int mn = *min_element(v.begin(), v.end());
            if(mn%2 == 1) YES;
            else NO;
        }
    }

    return 0;
}
