#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL);
vector<int> ds;
int mod(int a, int i, int l){
    return (a%(i-l+1));
}

int sigma(int l, int r){
    int res = 0;
    for(int i = l; i<= r; i++){
        res+=mod(ds[i],i,l);
    }
    return res;
}

int main(){
    ds.push_back(0);
    int n, q, tmp,l,r;
    cin >> n >> q;
    while(n--){
        cin >> tmp;
        ds.push_back(tmp);
    }
    while(q--){
        cin >> l >> r;
        cout << sigma(l,r) << endl;
    }
    
    return 0;
}