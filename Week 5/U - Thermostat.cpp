#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int
#define ld long long double

//#define for for(int i=0; i<n; i++)

#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define pii pair<int,int>

#define Test int t;cin >> t;while(t--)
#define Q int q; cin>>q; while(q--)

#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define c1 cout<<-1<<endl
#define endl "\n"
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


int main()
{
    Test
    {
        int l, r, x; cin >> l >> r >> x;
        int a, b; cin >> a >> b;

        if(a == b) cout << 0 << endl;
        else if(abs(a - b) >= x) cout << 1 << endl;
        else if((min(a,b) - l >= x) || r - max(a,b) >= x) cout << 2 << endl;
        else if((a-l >= x && r-b >= x) || (r - a >= x && b - l >= x)) cout << 3 << endl;
        else cout << -1 << endl;
    }

    return 0;
}

