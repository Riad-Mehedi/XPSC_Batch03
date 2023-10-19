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
        ll n; cin >> n;

        vll v(n);
        for(ll i=0; i<n; i++) cin >> v[i];

        ll ans = 0;
        priority_queue<ll> pq;
        for(ll i=0; i<n; i++)
        {
            if(v[i] == 0)
            {
                if(pq.empty()) continue;
                ans += pq.top();
                pq.pop();
            }
            else
                pq.push(v[i]);
        }
        cout << ans << endl;
    }

    return 0;
}




