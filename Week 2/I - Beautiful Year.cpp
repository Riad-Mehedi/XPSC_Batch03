#include<bits/stdc++.h>
using namespace std;

int main(){
    int a; cin>>a;

    while(true){
        a++;
        string s = to_string(a);
        if(s[0]!=s[1] && s[0]!=s[2] && s[0]!=s[3] && s[1]!=s[2]
           && s[1]!=s[3] && s[2]!=s[3]){
            cout<<a<<endl;
            break;
        }
    }

    return 0;
}
