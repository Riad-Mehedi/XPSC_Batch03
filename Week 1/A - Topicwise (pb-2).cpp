vector<long long> printFirstNegativeInteger(long long int a[], long long int n, long long int k) {

    vector<long long> ans;
    long long i=0, j=0;
    queue<long long> q;

    while(j<n)
    {
        if(a[j] < 0) q.push(a[j]);
        if(j >= k-1)
        {
            if(q.size()) ans.push_back(q.front());
            else ans.push_back(0);
            if(a[i]<0) q.pop();
            i++;
        }
        j++;
    }

    return ans;
}


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
//    int n; cin >> n;
//    int a[n];
//    for cin >> a[i];
//
//    int k; cin >> k;
//
//    int i=0, j=0;
//    queue<int> q;
//
//    while(j<n)
//    {
//        if(a[j] < 0) q.push(a[j]);
//        if(j >= k-1)
//        {
//            if(q.size()) cout << q.front() << " ";
//            else cout << 0 << " ";
//            if(a[i]<0) q.pop();
//            i++;
//        }
//        j++;
//    }
//
//    return 0;
//}
