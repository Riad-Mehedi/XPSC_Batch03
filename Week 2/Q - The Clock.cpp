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


bool isPalindrome(const string &time)
{
    return (time[0] == time[4] && time[1] == time[3]);
}

int main()
{
    Test
    {
        string s;
        int x;
        cin >> s >> x;

        int cnt = 0;
        set<string> seen;

        while (seen.find(s) == seen.end())
        {
            seen.insert(s);
            if (isPalindrome(s))
            {
                cnt++;
            }

            int minutes = stoi(s.substr(3, 2)) + x;
            int hours = stoi(s.substr(0, 2)) + minutes / 60;
            minutes %= 60;
            hours %= 24;

            s = (hours < 10 ? "0" : "") + to_string(hours) + ":" + (minutes < 10 ? "0" : "") + to_string(minutes);
        }

        cout << cnt << endl;
    }

    return 0;
}


