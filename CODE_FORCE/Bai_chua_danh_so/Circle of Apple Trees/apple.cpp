#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL);

set<int> s;
int main(){
    int t,l, tmp;
    cin >> t;
    while(t--){
        s.clear();
        cin >> l;
        while(l--){
            cin >> tmp;
            s.insert(tmp);
        }
        cout << s.size() << endl;
    }
    return 0;
}