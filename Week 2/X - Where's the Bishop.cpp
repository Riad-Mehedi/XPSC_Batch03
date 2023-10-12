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


char a[10][10];

int main()
{
    Test
    {
        for(int i=1; i<=8; i++)
        {
            for(int j=1; j<=8; j++)
            {
                cin >> a[i][j];
            }
        }
        for(int i=1; i<=8; i++)
        {
            for (int j=1; j<=8; j++)
            {
                if(a[i][j]=='#')
                {
                    if(a[i-1][j-1]=='#' && a[i-1][j+1]=='#' && a[i+1][j-1]=='#' && a[i+1][j+1]=='#')
                    {
                        cout << i <<" "<< j << endl;
                        break;
                    }
                }
            }
        }
    }

    return 0;
}
