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
//#define c1 cout<<-1<< '\n'
#define c0 cout<<0<< '\n'

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



void solve()
{
    int t;
    cin >> t;
    while( t != 0)
    {
        int n; cin >> n;
        string s; cin >> s;

        s = "A" + s;
        int aliceScore = 0;
        int bobScore = 0;

        for(int i = 0; i < n; ++i)
        {
            if(s[i] == 'A' && s[i + 1] == 'A')
            {
                aliceScore++;
            }
            else if(s[i]=='B' && s[i + 1]=='B')
            {
                bobScore++;
            }
        }
        cout << aliceScore << " " << bobScore << endl;
        t = t - 1;
    }
}

int main()
{
    FAYAZ

    //Test
    //{
        solve();
    //}

    HUMAIRA;
}

