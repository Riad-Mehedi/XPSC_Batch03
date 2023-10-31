#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

//#define for for(int i=0; i<n; i++)

#define FAYAZ ios::sync_with_stdio(0); cin.tie(0);
#define HUMAIRA return 0

#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define pb push_back
#define pii pair<int,int>

#define Test int t;cin >> t;while(t--)
#define Q int q; cin>>q; while(q--)

#define YES cout<<"YES"<< '\n'
#define NO cout<<"NO"<< '\n'
#define Yes cout<<"Yes"<< '\n'
#define No cout<<"No"<< '\n'
#define endl "\n"
#define nl cout<<"\n"
#define c1 cout<<-1<< '\n'
#define c0 cout<<0<< '\n'

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

vector<vector<int>> g;
vector<int> cnt;

void dfs(int u, int v)
{
    if(g[u].size() == 1 && g[u][0] == v)
    {
        cnt[u] = 1;
    }
    else
    {
        for(auto x : g[u])
        {
            if(x == v)
                continue;
            dfs(x, u);
            cnt[u] += cnt[x];
        }
    }
}

int solve()
{
    int n; cin >> n;
    g.assign( n + 1, vector<int>() );
    cnt.assign(n + 1, 0);

    for(int i = 1; i < n; i ++)
    {
        int x, y; cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1, 0);

    Q
    {
        int x, y; cin >> x >> y;
        cout << cnt[x] * 1LL * cnt[y] << endl;
    }
    return 0;
}

int main()
{
    FAYAZ

    Test{
       solve();
    }

    HUMAIRA;
}
