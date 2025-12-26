#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL);

int main(){
    int t;
    cin >> t;
    if ((t % 2 == 0) && (t != 0) && (t > 2)) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}