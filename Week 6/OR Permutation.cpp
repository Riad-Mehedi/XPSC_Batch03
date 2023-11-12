//
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int t;
//    cin >> t;
//
//    while (t--) {
//        int n;
//        cin >> n;
//
//        string s1, s2;
//        cin >> s1 >> s2;
//
//        int cnt1 = 0, cnt2=0;
//
//        for (int i = 0; i < n; i++) {
//            if ((s1[i] == 'R' && s2[i] == 'S') || (s1[i] == 'S' && s2[i] == 'P') || (s1[i] == 'P' && s2[i] == 'R')) {
//                cnt1++;
//            }
//            else if ((s2[i] == 'R' && s1[i] == 'S') || (s2[i] == 'S' && s1[i] == 'P') || (s2[i] == 'P' && s1[i] == 'R'))
//                cnt2++;
//        }
//
//        if ( cnt1 > cnt2 ) cout << 0 << endl;
//        else if (cnt1 < cnt2) cout << abs( cnt1 - cnt2 ) << endl;
//    }
//
//    return 0;
//}


#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s1, s2;
        cin >> s1 >> s2;

        int cnt1 = 0, cnt2 = 0;

        for (int i = 0; i < n; i++) {
            if ((s1[i] == 'R' && s2[i] == 'S') || (s1[i] == 'S' && s2[i] == 'P') || (s1[i] == 'P' && s2[i] == 'R')) {
                cnt1++;
            }
            else if ((s2[i] == 'R' && s1[i] == 'S') || (s2[i] == 'S' && s1[i] == 'P') || (s2[i] == 'P' && s1[i] == 'R')) {
                cnt2++;
            }
        }

        if (cnt1 > cnt2) {
            cout << 0 << endl;
        }
        else if (cnt1 < cnt2) {
            cout << cnt2-cnt1 << endl;
        }
        else {
            cout << 0 << endl;
        }
    }

    return 0;
}
