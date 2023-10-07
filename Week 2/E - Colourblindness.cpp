#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s1, s2; cin >> s1 >> s2;
        int cnt = 0;
        for(int i=0; i<s1.size(); i++){
            if((s1[i]=='G' || s1[i]=='B') && (s2[i]=='G' || s2[i]=='B')) cnt++;
            else if(s1[i]==s2[i]) cnt++;
            else break;
        }
        if(cnt == s1.size()) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}
