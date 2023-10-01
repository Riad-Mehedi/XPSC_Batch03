#include<bits/stdc++.h>
using namespace std;

#define ll long long int

#define pb push_back
#define pii pair<int,int>

#define Test int t;cin >> t;while(t--)
#define Q int q; cin>>q; while(q--)

#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define c1 cout<<-1<<endl

int main()
{
    Test{
        int n; cin >> n;
        string s; cin >> s;

        set<char> st;
        for(char c : s){
            st.insert(c);
        }

        int sz = st.size();
        int sz2 = n - sz;

        cout << (2*sz)+sz2 << endl;

    }

    return 0;
}
