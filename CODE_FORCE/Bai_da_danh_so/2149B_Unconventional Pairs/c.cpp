#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    int m = 0;
    for(int i = 0; i < n - 1; i+=2){
        m = max(m, abs(a[i] - a[i+1]));
    }
    cout<<m<<endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}