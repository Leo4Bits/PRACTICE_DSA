#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL);
int main(){
    int t, l, top;
    cin >> t;
    while(t--){
        int res = 0;
        cin >> l;
        cin >> top; --l;
        while(l--){
            int tmp;
            cin >> tmp;
            
            if (tmp < top) ++res;
            else {
                top = tmp;
            }
        }
        cout << res << endl;
    }
    return 0;
}