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


bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n%2 == 0 || n%3 == 0) return false;

    for (int i=5; i*i<=n; i += 6)
    {
        if (n%i == 0 || n%(i+2) == 0) return false;
    }
    return true;
}

int main()
{
    int n, cnt = 0; cin >> n;

    for (int i=2; i<=n; i++)
    {
        int prime_divisors = 0;
        for (int j=2; j<=i; j++)
        {
            if (i%j == 0 && isPrime(j))
            {
                prime_divisors++;
            }
        }

        if (prime_divisors == 2) cnt++;
    }

    cout << cnt << endl;

    return 0;
}
