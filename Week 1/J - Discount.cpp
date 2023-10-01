#include<bits/stdc++.h>
using namespace std;

#define ll long long int

#define pb push_back
#define pii pair<int,int>

#define Test int t;cin >> t;while(t--)
#define Q int q; cin>>q; while(q--)

#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define c1 cout<<-1<<endl

int main()
{
    int a,b; cin >> a >> b;
    int sub = a-b;
    cout << ((sub/double(a))*100.0) << endl;

    return 0;
}

