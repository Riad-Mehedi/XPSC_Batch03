#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long long double

//#define for for(int i=0; i<n; i++)

#define pb push_back
#define pii pair<int,int>

#define Test int t;cin >> t;while(t--)
#define Q int q; cin>>q; while(q--)

#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define c1 cout<<-1<<endl
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


int main() {
    string str; cin >> str;

    set<char> st;
    for (auto i : str) st.insert(i);

    for (char i='a'; i<='z'; i++){
        if (st.find(i) == st.end()){
            cout << i << endl;
            return 0;
        }
    }
    cout << "None" << endl;

    return 0;
}
