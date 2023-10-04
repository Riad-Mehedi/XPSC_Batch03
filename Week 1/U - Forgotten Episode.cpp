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
    int n; cin >> n;

    int a[n-1];
    for(int i=0; i<n-1; i++) cin >> a[i];
    sort(a, a+n-1);
    for(int i=0; i<=n-1; i++){
        if(a[i] != i+1){
            cout << i+1 << endl;
            break;
        }
    }

    return 0;
}
