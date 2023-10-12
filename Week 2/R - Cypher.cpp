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


int main()
{
  Test
  {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int ans[n];
    for (int i = 0; i < n; i++)
    {
      int b;
      string s;
      cin >> b >> s;
      ans[i] = a[i];
      for (int j = 0; j < b; j++)
      {
        if (s[j] == 'U')
        {
          ans[i]--;
          if (ans[i] == -1)
            ans[i] = 9;
        }
        else
        {
          ans[i]++;
          if (ans[i] == 10)
            ans[i] = 0;
        }
      }
    }

    for (int i = 0; i < n; i++)
    {
      cout << ans[i] << " ";
    }
    cout << endl;
  }
  return 0;
}
