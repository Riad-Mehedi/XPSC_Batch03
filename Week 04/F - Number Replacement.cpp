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
        int n; cin >> n;
        int a[n];
        for (int i=0;i<n; i++) cin >> a[i];

        string s; cin >> s;
        vi v;

        for (int i=0; i<s.length(); i++) v.pb(s[i]);

        int flag = 1;
        for (int i=0; i<n; i++)
        {
            for (int j=i+1; j<n; j++)
            {
                if ( (a[i] == a[j]) and (v[i] != v[j]) ) flag = 0;
            }
        }

        if(flag) YES;
        else NO;
    }

    return 0;
}

