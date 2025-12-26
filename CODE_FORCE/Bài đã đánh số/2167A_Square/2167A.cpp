#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL);

int main(){
    int t, tmp, compare;
    cin >> t;
    while(t--){
        cin >> compare ;
        bool ok = true;
        int stop = 3;
        while(stop--)
        {
            cin >> tmp;
            if (compare != tmp) {
                ok = false;

            }
        }
        cout << (ok ? "YES" : "NO") << "\n";
    }
    return 0;
}