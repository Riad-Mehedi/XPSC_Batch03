#include<bits/stdc++.h>
using namespace std;

#define ll long long

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
        int s, i;
        cin >> s;

        vi v;
        int sum = 0;
        for( i = 9; i>= 1; i-- )
        {
            if (s - sum >= i)
            {
                sum += i;
                v.pb(i);
            }
            else if (sum == s) break;
        }

        sort ( v.begin(), v.end() );
        for ( i = 0; i<v.size(); i++ ) cout << v[i];

        cout << endl;
    }

    return 0;
}

