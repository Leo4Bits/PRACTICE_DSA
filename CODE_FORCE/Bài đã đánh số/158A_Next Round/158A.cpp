#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL);

vector<int> v;
int main(){
    int l, compare, res = 0, tmp;;
    cin >> l >> compare;
    while(l--){
        cin >> tmp;
        v.push_back(tmp);
    }
    compare = v[compare-1];
    for(const auto &i: v){
        res+= (i>= compare && (compare+i > 0));
    }
    cout << res << endl;
    return 0;
}