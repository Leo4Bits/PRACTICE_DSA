#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);


int main(){
    int t, k, c;
    cin >> t;
    while(t--){
        cin >> k;
        int cd = 0;
        bool existed = false;
        while (k--){
            cin >> c;
            cd = (c >=2) ? cd + 1 : cd;
            if (c > 2) existed = true;
            
        }
        if ((cd >= 2) || existed ) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    return 0;
} 