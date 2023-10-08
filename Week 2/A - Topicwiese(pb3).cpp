#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int longestKSubstr(string s, int k)
    {
        int ans = -1;
        map<char,int> mp;
        int i=0;

        for(int j=0; j<s.size(); j++){

            mp[s[j]]++;
            if(mp.size() == k) ans = max(ans, j-i+1);

            else if(mp.size() > k)
            {
                mp[s[i]]--;
                if(mp[s[i]] == 0) mp.erase(s[i]);
                i++;
            }
        }
        return ans;
    }
};
