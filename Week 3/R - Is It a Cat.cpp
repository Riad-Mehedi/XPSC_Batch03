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
        int n; cin >> n;
        string str1, str2; cin >> str1;
        transform(str1.begin(), str1.end(), str1.begin(), :: tolower);

        str2.pb(str1[0]);
        for(int i=1; i<n; i++)
        {
            if(str2.back() != str1[i])
                str2.pb(str1[i]);
        }

        if(str2 == "meow") cy;
        else cn;


    }

    return 0;
}
