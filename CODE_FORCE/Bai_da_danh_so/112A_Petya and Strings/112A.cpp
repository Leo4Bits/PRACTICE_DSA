#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(NULL);

int main(){
    string a, b;
    cin >> a >> b;
    for(int i = 0; i < a.size(); i++){
        a[i] = (a[i] >= 97)? a[i]:a[i]+32;
        b[i] = (b[i] >= 97)? b[i]:b[i]+32;
        // cout << a[i] << " " << b[i] << endl;
        if (abs(a[i] - b[i]) != 0) {
            if (a[i] - b[i] > 0 ){
                cout << 1 << endl;
                return 0;
            }
            else {
                cout << -1 << endl;
                return 0;
            }
        }
    }
    cout << 0 << endl;
    return 0;
}