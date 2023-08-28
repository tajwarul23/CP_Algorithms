#include <bits/stdc++.h>
#include <iomanip>
#define ll long long
#define pb push_back
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define arrin(arr, n) for (ll i = 0; i < n; i++) cin >> arr[i];
#define arrout(arr, n) for (ll i = 0; i < n; i++) cout << arr[i] << " "; cout << "\n";
#define vin(v, n) for (ll i = 0; i < n; i++) { ll x; cin >> x; v.pb(x); }
#define vout(v) for (auto it : v) cout << it << " "; cout << "\n";

using namespace std;

int main() {
    fast;
    int tc; cin >> tc;
    while (tc--) {
        ll n; cin>>n;
        ll arr[n];
        arrin(arr, n);
        ll ls=0,rs=0,mx=0;
        for (ll i = 0; i <n; i++)
        {
            rs+=arr[i];
        }
        for (ll i = 0; i <n-1; i++)
        {
            ls+=arr[i];
            rs-=arr[i];
            mx = max(mx, __gcd(ls, rs));
        }
        cout<<mx<<endl;
        
        
    }
    return 0;
}