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
    int a,b,c; cin >> a >> b >> c;
    int s=0;
    bool flag = 0;
    for(int i=0; i<=c; i++){
        for(int j=0; j<=c; j++){
            if((a*i)+(b*j)==c){
                flag = 1;
                break;
            }
        }
    }
    if(flag) cy;
    else cn;

    return 0;
}

