#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long long double

#define for for(int i=0; i<n; i++)

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
    int a,b,s=0; cin >> a >> b;
    if(a>b) s = a+(a-1);
    else if(a<b) s = b+(b-1);
    else s = a+b;

    cout << s << endl;

    return 0;
}
