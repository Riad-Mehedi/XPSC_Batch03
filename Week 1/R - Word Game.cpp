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
#define nl cout<<endl;
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


int main()
{
    Test{
        int n; cin >> n;

        map<string,int> cnt;
        vector<string> w[3];

        for(int i=0; i<3; i++){
            w[i].resize(n);
            for(int j=0; j<n; j++){
                cin >> w[i][j];
                cnt[w[i][j]]++;
            }
        }

        int a[3]={0};
        for(int i=0; i<3; i++){
            for(int j=0; j<n; j++){
                if(cnt[w[i][j]]==1) a[i]+=3;
                else if(cnt[w[i][j]]==2) a[i]++;
            }
        }

         for(int i=0; i<3; i++){
            cout << a[i] << " ";
         }
         nl;
    }

    return 0;
}
