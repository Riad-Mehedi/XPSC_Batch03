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
    string a; cin >> a;
    if(a.size()==1) cout << "000" << a << endl;
    else if(a.size()==2) cout << "00" << a << endl;
    else if(a.size()==3) cout << "0" << a << endl;
    else cout << a << endl;

    return 0;
}
