class Solution{
    public:
    int lenOfLongSubarr(int a[],  int n, int k)
    {

        int sum = 0, ans=0;
        map<int,int> mp;
        mp[0] = -1;
        for(int i=0; i<n; i++){
            sum += a[i];

            //if(sum == k) ans = i+1;
            //if(sum > k){
                if(mp.find(sum-k) != mp.end()){
                    ans = max(ans, i-mp[sum-k]);
                }
            //}
            if(mp.find(sum) == mp.end()){
                mp[sum] = i;
            }
        }
        return ans;
    }

};
