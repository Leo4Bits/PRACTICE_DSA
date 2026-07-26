#include <bits/stdc++.h>
using namespace std;


#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL);

int main(){
    int t, x,n;
    cin >> t;
    while(t--){
        cin >> x >> n;
        if (n % 2 == 0) cout << 0 << endl;
        else{
            cout << x << endl;
        }
    }
    return 0;
}