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


int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int k;
    cin >> k;

    ll result = 0;

    for (int a = 1; a <= k; a++) {
        for (int b = 1; b <= k; b++) {
            for (int c = 1; c <= k; c++) {
                result += gcd(gcd(a, b), c);
            }
        }
    }

    cout << result << endl;

    return 0;
}

