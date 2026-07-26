#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL);

int main(){
    int t, tmp;
    cin >> t;
    while(t--){
        cin >> tmp;
        cout << (tmp -1 + tmp - 1 -1) + 1 << endl;
    }
    return 0;
}