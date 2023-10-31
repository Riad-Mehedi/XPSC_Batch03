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
        ll n;
        char c;
        cin >> n >> c;
        string str;
        cin >> str;
        str += str;
        ll ans = 0,p = -1;
        for(ll i=str.size() - 1; i>=0; i--)
        {
            if(str[i] == 'g')
            {
                p = i;
            }
            if(str[i] == c)
            {
                ans = max(ans,p - i);
            }
        }
        cout << ans << endl;
    }
}
