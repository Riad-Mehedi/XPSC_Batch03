#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define ll long long
#define ld long long double

//#define for for(int i=0; i<n; i++)

#define vec vector<long long>
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

    ll n;
    cin >> n;
    ll a[n];
    ll s=0; ll mn;
    for(ll i=0; i<n; i++){
        cin >> a[i];
        s += a[i];
    }
    //sort(a, a+n);
    //for(ll i=0; i<n; i++) cout << a[i] << " ";

    for(ll i=0; i<n; i++)
    {
        if(a[i]%2 != 0){
            mn = a[i];
            break;
        }
    }
    if(s%2==0) cout << s << endl;
    else cout << s-mn << endl;

    return 0;
}
