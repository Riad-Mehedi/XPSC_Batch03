#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int
#define ld long long double

//#define for for(int i=0; i<n; i++)

#define vi vector<int>
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


int main()
{
    Test
    {
        int k,n; cin >> k >> n;

        vi a(k);
        int d = 0;
        for(int i=k-1; i>=0; i--)
        {
            a[i] = max(n-d, 0);
            n -= d;
            d++;
        }
        if(a[0] == 0)
        {
            a[0] = 1;
            int i=1;
            while(a[i-1] >= a[i] && i < k)
            {
                a[i] = a[i-1]+1;
                i++;
            }
        }

        for(int x: a) cout << x << " ";
        cout << endl;
    }
    return 0;
}
