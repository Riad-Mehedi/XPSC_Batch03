int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    long long i=0, j=0, s=0, mx=0;

    while(j < a.size()){
        s += a[j];

        while(s > k){
            s -= a[i];
            i++;
        }

        if(s == k){
            mx = max(mx, j-i+1);
        }

        j++;
    }
    return mx;
}
