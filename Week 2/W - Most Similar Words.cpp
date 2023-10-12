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


int distance(string s1, string s2)
{
    int diff = 0;
    for(int i = 0; i < s1.length(); i++)
    {
        diff += abs(s1[i] - s2[i]);
    }
    return diff;
}

int main()
{
    Test
    {
        int n, m;
        cin >> n >> m;
        vector<string> words(n);
        for(int i = 0; i < n; i++)
        {
            cin >> words[i];
        }
        int min_diff = INT_MAX;
        for(int i = 0; i < n; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                min_diff = min(min_diff, distance(words[i], words[j]));
            }
        }
        cout << min_diff << endl;
    }
    return 0;
}
