#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string str; cin>>str;
        if(str=="YES" || str=="yes" || str=="Yes" || str=="yEs" || str=="yeS" || str=="YEs" || str=="YeS" || str=="yES")
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
