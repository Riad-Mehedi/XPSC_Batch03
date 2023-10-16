#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int
#define ld long long double

//#define for for(int i=0; i<n; i++)

#define vi vector<int>
#define vs vector<string>
#define pb push_back
#define pii pair<int,int>

#define Test int t;cin >> t;while(t--)
#define Q int q; cin>>q; while(q--)

#define cY cout<<"YES"<<endl
#define cN cout<<"NO"<<endl
#define cy cout<<"Yes"<<endl
#define cn cout<<"No"<<endl
#define c1 cout<<-1<<endl
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


int main()
{
    Test
    {
        int n;
        cin >> n;
        vs a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        map<string, int> freq;
        for(int i=0; i<n; i++)
        {
            freq[a[i]]++;
        }

        string ans(n,'0');
        for(int i=0; i<n; i++)
        {
            if(a[i].size() == 1) continue;
            for(int j=0; j<=a[i].size()-2; j++)
            {
                string x="", y="";
                for(int k=0; k<=j; k++) x.pb(a[i][k]);
                for(int k=j+1; k<=a[i].size()-1; k++) y.pb(a[i][k]);


                if(x == y)
                {
                    if(freq[x] > 0)
                    {
                        ans[i] = '1';
                        break;
                    }
                }
                else
                {
                    if(freq[x] > 0 && freq[y] > 0)
                    {
                        ans[i] = '1';
                        break;
                    }
                }
                if(ans[i] == '1') break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
