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

void solve(){
    int a,b; cin >> a >> b;
    int ans = a+b;

    if (ans > 6) YES;
    else NO;
}

int main()
{
    FAYAZ

    Test
        solve();

    HUMAIRA;
}


