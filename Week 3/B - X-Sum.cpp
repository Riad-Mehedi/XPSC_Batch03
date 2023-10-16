#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int
#define ld long long double

//#define for for(int i=0; i<n; i++)

#define vec vector<int>
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
// () # & !


int main()
{
    Test
    {
        int n, m; cin >> n >> m;

        int a[n][m];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin >> a[i][j];
            }
        }

        int sum = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                int sm = 0;

                int ci = i;
                int cj = j;
                while(ci >= 0 && cj >= 0)
                {
                    sm += a[ci][cj];
                    ci--;
                    cj--;
                }

                ci = i;
                cj = j;
                while(ci >= 0 && cj < m)
                {
                    sm += a[ci][cj];
                    ci--;
                    cj++;
                }

                ci = i;
                cj = j;
                while(ci < n && cj >= 0)
                {
                    sm += a[ci][cj];
                    ci++;
                    cj--;
                }

                ci = i;
                cj = j;
                while(ci < n && cj < m)
                {
                    sm += a[ci][cj];
                    ci++;
                    cj++;
                }

                sm -= 3*a[i][j];
                sum = max(sum, sm);
            }
        }

        cout << sum << endl;
    }

    return 0;
}

