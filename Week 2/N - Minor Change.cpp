#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int
#define ld long long double

//#define for for(int i=0; i<n; i++)

#define vec vector<int>
#define pb push_back
#define pii pair<int,int>

#define Test int t;cin >> t;while(t--)
#define Q int q; cin>>q; while(q--)

#define cY cout<<"YES"<<endl
#define cN cout<<"NO"<<endl
#define cy cout<<"Yes"<<endl
#define cn cout<<"No"<<endl
#define c1 cout<<-1<<endl
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// () # & !


int main() {
    string s, t;
    cin >> s >> t;

    int ans = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != t[i]) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}

