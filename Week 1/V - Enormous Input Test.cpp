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
    int n, k, cnt=0; cin >> n >> k;

    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]%k == 0) cnt++;
    }
    cout << cnt << endl;

    return 0;
}


