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


int countSetBit(int n)
{
    int cnt=0;
    while(n)
    {
        cnt += (n&1);
        n >>= 1;
    }
    return cnt;
}

int main()
{
    int n,m,k; cin >> n >> m >>k;

    int a[m+1];
    for (int i = 0; i < m+1; i++) cin >> a[i];

    int d = a[m];
    int ans =0;

    for (int i = 0; i < m; i++)
    {
        if(countSetBit(a[i]^d)<=k) ans++;
    }

    cout << ans << endl;

    return 0;
}
