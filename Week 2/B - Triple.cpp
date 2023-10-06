#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long long double

//#define for for(int i=0; i<n; i++)

#define pb push_back
#define pii pair<int,int>

#define Test int t;cin >> t;while(t--)
#define Q int q; cin>>q; while(q--)

#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define c1 cout<<-1<<endl
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


int main()
{
    Test{
        int n; cin >> n;

        int result = -1;

        map<int,int> mp;
        for(int i=1; i<=n; i++){
            int mx; cin >> mx;
            mp[mx]++;
            if(mp[mx] >= 3) result = mx;
        }
        cout << result << endl;
    }

    return 0;
}
