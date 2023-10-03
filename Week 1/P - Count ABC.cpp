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


int main(){
    int n, cnt=0; cin >> n;
    char a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++){
        if(a[i]=='A' && a[i+1]=='B' && a[i+2]=='C') cnt++;
    }
    cout << cnt << endl;

    return 0;
}

