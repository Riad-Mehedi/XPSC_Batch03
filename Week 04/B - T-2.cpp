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
        int a, b; cin >> a >> b;
        int cur = -1;
        int i = 0;
        while (i < a)
        {
            int d; cin >> d;
            if ((d & b) == b)
                cur &= d;
            i++;
        }
        if (cur == b) YES;
        else NO;
    }
    return 0;
}
