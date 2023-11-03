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


void solve()
{
    string str; cin >> str;
    int len = str.size();
    cout << abs(str[len-1] - str[0]) << ' ';

    bool ck = 0;
    if(str[0] > str[len-1]){
        swap(str[0], str[len-1]);
        ck = 1;
    }
    vector < pair<int, int> > v;
    for(int i = 0; i < len; i++){
        if(str[i] >= str[0] && str[i] <= str[len-1]){
            v.pb({str[i], i + 1});
        }
    }
    sort(v.begin(), v.end());
    cout << v.size() << '\n';

    if(ck){
        int n = v.size();
        cout << 1 << ' ';
        for(int i = n - 2; i > 0; i--){
            cout << v[i].second << ' ';
        }
        cout << v[n-1].second << '\n';
    }
    else{
        for(auto x: v){
            cout << x.second << ' ';
        }
        cout << '\n';
    }
}

int main()
{
    FAYAZ

    Test
    {
        solve();
    }

    HUMAIRA;
}

