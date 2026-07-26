#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL);
#define ll long long

ll hao(ll n, ll res = 0){
    if (n <= 4){
        return (n !=2) + res;
    } 
    else return hao(n = (n - n%3)/3 + n%3,res+= ((ll)(n/3)));
}

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        cout << hao(n) << endl;
    }
    return 0;
}