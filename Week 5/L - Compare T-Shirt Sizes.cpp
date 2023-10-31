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
        string a, b; cin >> a >> b;

        char x = a.back();
        char y = b.back();

        if ( x == y )
        {
            if ( a.size() == b.size() )
                cout << '=';
            else if ( x == 'S' )
                cout << ( a.size() < b.size() ? '>' : '<' );
            else
                cout << ( a.size() < b.size() ? '<' : '>' );
        }
        else
            cout << ( x < y ? '>' : '<' );

        cout << endl;
    }

    return 0;
}
