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
    string str; cin >> str;
    int cnt = 0;

    while (str.size() > 1)
    {
        int sum = 0;

        for (char digit : str)
        {
            sum += digit - '0';
        }

        str = to_string(sum);
        cnt++;
    }

    cout << cnt << endl;

    return 0;
}

