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
        int n; cin>>n;
        int a[n];
        map<int,int>mp;
        set<int>st;

        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
            st.insert(a[i]);
            st.insert(a[i]+1);
        }

        int cnt = 0;
        int last = 0;
        for(auto x : st)
        {
            int c = mp[x];
            cnt += max(0, c-last);
            last = c;
        }
        cout << cnt << endl;
    }

    return 0;
}
