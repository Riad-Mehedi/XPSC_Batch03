class Solution{
public:
    long maximumSumSubarray(int k, vector<int> &a , int n){

        long long i=0, j=0, s=0;
        long long mx = INT_MIN;

        while(j < n){
            s += a[j];
            if(j >= k-1){
                mx = max(mx, s);
                s -= a[i];
                i++;
            }
            j++;
        }
        return mx;
    }
};

//#include<bits/stdc++.h>
//using namespace std;
//
//#define ll long long int
//#define ld long long double
//
//#define for for(int i=0; i<n; i++)
//
//#define pb push_back
//#define pii pair<int,int>
//
//#define Test int t;cin >> t;while(t--)
//#define Q int q; cin>>q; while(q--)
//
//#define cy cout<<"YES"<<endl
//#define cn cout<<"NO"<<endl
//#define c1 cout<<-1<<endl
////------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//
//
//int main()
//{
//    int n,k; cin >> n >> k;
//    int a[n];
//    for cin >> a[i];
//
//    int i=0, j=0, s=0;
//    int mx = INT_MIN;
//
//    while(j<n){
//        s += a[j];
//        if(j >= k-1){
//            mx = max(mx,s);
//            s -= a[i];
//            i++;
//        }
//        j++;
//    }
//
//    cout << mx << endl;
//
//    return 0;
//}
//
