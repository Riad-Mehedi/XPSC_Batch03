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

int main(){
    int n; cin >> n;
    lli ara[n],freq[n],freq2[n];
    for(int i  = 0; i < n; i++) {
        cin >> ara[i];
        if(i == 0) freq[i] = ara[i];
        else freq[i] = freq[i-1]+ara[i];
    }

    sort(ara,ara+n);
    for(int i  = 0; i < n; i++) {
        if(i == 0) freq2[i] = ara[i];
        else freq2[i] = freq2[i-1]+ara[i];
    }

    int t; cin >> t;
    while(t--){
        int type,l,r;
        cin >> type >> l >> r;
        l--;
        r--;
        if(type == 1){
            if(l == 0) cout << freq[r] << endl;
            else cout << freq[r] - freq[l-1] << endl;
        }
        else{
            if(l == 0) cout << freq2[r] << endl;
            else cout << freq2[r] - freq2[l-1] << endl;
        }
    }
    return 0;
}

