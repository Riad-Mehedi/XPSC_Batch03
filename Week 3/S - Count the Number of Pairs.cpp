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


int main()
{
    Test
    {
        ll n, k;
        cin >> n >> k;
        string str1;
        cin >> str1;

        map<char, ll> mp;
        for(ll i=0; i<str1.size(); i++)
        {
            mp[str1[i]]++;
        }

        int cnt = 0;
        for(char i='a'; i<='z'; i++)
        {
            char a = toupper(i);
            if(mp[i] > mp[a])
            {
                cnt += mp[a];
                mp[i] -= mp[a];
                mp[a] = 0;
                if(mp[i] > 1)
                {
                    ll b = mp[i]/2;
                    if(b > k)
                    {
                        cnt += k;
                        k = 0;
                    }
                    else if(b < k)
                    {
                        cnt += b;
                        k -= b;
                    }
                    else
                    {
                        cnt += b;
                        k = 0;
                        b = 0;
                    }
                }
            }
            else if(mp[i] < mp[a])
            {
                cnt += mp[i];
                mp[a] -= mp[i];
                mp[i] = 0;
                if(mp[a] > 1)
                {
                    ll b = mp[a]/2;
                    if(b > k)
                    {
                        cnt += k;
                        k = 0;
                    }
                    else if(b < k)
                    {
                        cnt += b;
                        k -= b;
                    }
                    else
                    {
                        cnt += b;
                        k = 0;
                        b = 0;
                    }
                }
            }
            else if(mp[i] == mp[a])
            {
                cnt += mp[a];
                mp[a] = 0;
                mp[i] = 0;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}

