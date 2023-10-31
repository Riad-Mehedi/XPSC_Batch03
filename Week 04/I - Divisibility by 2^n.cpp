#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long int

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
#define endl "\n"
#define c1 cout<<-1<<endl
#define c0 cout<<0<<endl

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


int p(int n)
{
    int count = 0;
    while (n % 2 == 0)
    {
        count++;
        n /= 2;
    }
    return count;
}

signed main()
{
    Test
    {
        int n; cin >> n;
        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];

        int sum=0;
        for(int i=0; i<n; i++) sum+=p(a[i]);

        if(sum >= n) c0;
        else
        {
            int g[n];
            for(int i=0; i<n; i++) g[i] = p(i+1);

            sort(g, g+n);
            int f = 0;
            for(int i=n-1; i>=0; i--)
            {
                sum += g[i];
                f++;
                if(sum >= n)
                    break;
            }
            if(sum < n) c1;
            else
                cout << f << endl;
        }
    }

    return 0;
}
