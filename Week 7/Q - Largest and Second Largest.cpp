#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];

        int h1 = INT_MIN;
        int h2 = INT_MIN;

        for(int i=0; i<n; i++)
        {
            if(a[i] > h1)
            {
                h2 = h1;
                h1 = a[i];
            }
            else if(a[i] > h2 && a[i] != h1)
            {
                h2 = a[i];
            }
        }

        cout << h1+h2 << endl;
    }

    return 0;
}

