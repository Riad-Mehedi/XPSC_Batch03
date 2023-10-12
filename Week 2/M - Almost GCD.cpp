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


int main() {
    int N;
    cin >> N;
    vector<int> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int maxGCD = 0;
    int result = 0;

    for (int k = 2; k <= 1000; k++) {
        int GCD = 0;
        for (int i = 0; i < N; i++) {
            if (A[i] % k == 0) {
                GCD++;
            }
        }

        if (GCD >= maxGCD) {
            maxGCD = GCD;
            result = k;
        }
    }

    cout << result << endl;

    return 0;
}
