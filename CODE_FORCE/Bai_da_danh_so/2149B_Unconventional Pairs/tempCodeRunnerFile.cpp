#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL);
typedef long long ll;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll stop;
        cin >> stop;
        vector<ll> v;
        while (stop--)
        {
            ll tmp;
            cin >> tmp;
            v.push_back(tmp);
        }
        sort(v.begin(),v.end());
        ll mx = 0;
        if (v.size() == 2){
            cout << abs(v[1]-v[0]) << endl;
        }
        else{

            for(ll i = 1; i < v.size()-1;i+=2){
                if (abs(v[i]-v[i-1]) > mx ) mx = abs(v[i]-v[i-1]);
            }
            cout << mx << endl;
        }
        
    }
    return 0;
}

