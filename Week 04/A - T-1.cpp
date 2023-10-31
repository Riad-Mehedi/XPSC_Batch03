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

    int n;
    cin >> n;
    vi arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];

    bool flag = 0;
    int m = (1<<n);
    for(int i=0; i<m; i++)
    {
        int sum = 0;
        for(int bits = 0; bits<n; bits++)
        {
            if(i &(1<<bits)) sum += arr[bits];
            else sum -= arr[bits];
        }

        if(sum%360 == 0)
        {
            flag=1;
            break;
        }
    }

    if(flag==1) YES;
    else NO;

    return 0;
}
