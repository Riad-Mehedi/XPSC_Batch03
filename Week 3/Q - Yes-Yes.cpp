#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string str1; cin >> str1;
        string str2 ="YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";

        if(str2.find(str1) != -1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}
