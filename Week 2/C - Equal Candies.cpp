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
        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];
        int s=0;
        int mn = a[0];
        for(int i=0; i<n; i++){
            s += a[i];
            if(a[i]<mn) mn = a[i];
        }
        cout << s - (n*mn) << endl;
    }

    return 0;
}
