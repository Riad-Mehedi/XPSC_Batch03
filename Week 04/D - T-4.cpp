#include<bits/stdc++.h>
using namespace std;

#define ll long long

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
        int n;
        cin >> n;

        ll a[n + 1];
        for(int i = 1; i <= n; i++) cin >> a[i];

        sort(a+1, a+n+1);
        int l=1, r=n, ans=1;

        ll axor = a[r];
        while(l < r)
        {
            if(axor >= a[l])
            {
                axor ^= a[l++];
            }
            else
            {
                ans += 1;
                axor = a[r--];
            }
        }
        cout << ans << endl;
    }

    return 0;
}
