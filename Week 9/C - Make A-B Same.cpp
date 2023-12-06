#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

//#define for for(int i=0; i<n; i++)

#define FAYAZ ios::sync_with_stdio(0); cin.tie(0);
#define HUMAIRA return 0

#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define pb push_back
#define pii pair<int,int>

#define Test int t;cin >> t;while(t--)
#define Q int q; cin>>q; while(q--)

#define YES cout<<"YES"<< '\n'
#define NO cout<<"NO"<< '\n'
#define Yes cout<<"Yes"<< '\n'
#define No cout<<"No"<< '\n'
#define endl "\n"
#define nl cout<<"\n"
#define c1 cout<<-1<< '\n'
#define c0 cout<<0<< '\n'

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//bool prime(int n){if (n < 2) return false;if (n <= 3) return true;if (n%2 == 0) return false;for (int i=3; i*i<=n; i+=2){if (n%i == 0) return false;}return true;}

//void seive (int n){int prime_num [n+3];memset(prime_num, 0, sizeof(prime_num));for (int i=2; i*i<=n; i++){if (prime_num[i] == 0){for (int j=i*i; j<=n; j+=i){prime_num[j] = 1;}}}int cnt = 0;for (int i=2; i<=n; i++){if (prime_num[i] == 0){cnt++;cout << i << " ";}}cout << endl;cout << "Total prime number between 1 to " << n << " is : " << cnt << endl;}



void solve()
{

}

int main()
{
    FAYAZ

    Test
    {
        int n,i,j;
        cin >> n;
        int ar[n], br[n];

        int cnt0 = 0, cnt1 = 0;

        for (i=0; i<n; i++)
        {
            cin >> ar[i];
            if (ar[i] == 0) cnt0++;
            else cnt1++;
        }

        for (i=0; i<n; i++) cin >> br[i];

        if ( (ar[0] != br[0]) || (ar[n-1] != br[n-1]) )
        {
            NO;
            continue;
        }

        bool ans = false;
        for (i=1; i<n-1; i++)
        {
            if ( (ar[i] != br[i]) && (ar[i] == 0) && (cnt1 == 0) )
            {
                NO;
                ans = true;
                break;
            }
            if ( (ar[i] != br[i]) && (ar[i] == 1) )
            {
                NO;
                ans = true;
                break;
            }
        }
        if (!ans) YES;
    }
    //solve();

    HUMAIRA;
}

