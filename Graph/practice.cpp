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
        unordered_map<ll,ll>mp;
        ll x, count = 0;
        for (ll i = 0; i <n; i++)
        {
            cin>>x;
            count+=mp[x-i]++;
        }
        cout<<count<<endl;
        
    }
    return 0;
}