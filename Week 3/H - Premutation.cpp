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

const int N = 110;
int a[N][N];
int b[N];

int main()
{
    Test
    {
        int n; cin >> n;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n-1; j++)
            {
                cin >> a[i][j];
            }
        }

        if(a[1][1] == a[2][1]) b[1] = a[1][1];
        if(a[1][1] != a[2][1]) b[1] = a[3][1];

        for(int i=1; i<=n; i++)
        {
            if (a[i][1] != b[1])
            {
                for (int j=1; j<=n-1; j++)
                {
                    b[j+1] = a[i][j];
                }
                break;
            }
        }

        for (int i=1; i<=n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
