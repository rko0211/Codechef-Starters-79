#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    unordered_map<ll, ll> m;
    for (int i = 0; i < n; i++)
    {
        m[a[i]]++;
    }
    ll maxval = INT_MIN;
    for (auto &it : m)
    {
        maxval = max(maxval, it.second);
    }
    ll ans = 0;
   
    while (maxval<n)
    {
        // 0 1 2 3 4 0
        int t = min(n-maxval,maxval);
        ans += 1 + t;
        maxval+=t;
        // maxval++;
    }
  
    cout << ans << endl;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}