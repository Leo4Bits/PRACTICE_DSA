#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL);

int main(){
    string n;
    cin >> n;
    long long cnt = 0;
    for (char c: n){
        if (c == '4' || c == '7') ++cnt;
    }
    string t = to_string(cnt);
    for (char c: t){
        if (c != '4' && c != '7'){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}