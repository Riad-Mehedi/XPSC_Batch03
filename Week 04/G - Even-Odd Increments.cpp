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
        ll n, i, q;
        cin >> n >> q;
        vll arr(n);
        ll odd = 0, even = 0, sum = 0;
        for ( i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2)
                odd++;
            else
                even++;
            sum += arr[i];
        }
        while (q--)
        {
            ll query, val;
            cin >> query >> val;
            if (query == 0)
            {
                sum += even * val;
                if (val % 2)
                {
                    odd += even;
                    even = 0;
                }
            }
            else
            {
                sum += (odd * val);
                if (val % 2)
                {
                    even += odd;
                    odd = 0;
                }
            }
            cout << sum << endl;
        }
    }

    return 0;
}
