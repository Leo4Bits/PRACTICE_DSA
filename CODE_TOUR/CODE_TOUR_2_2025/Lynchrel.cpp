#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FAST_VC ios_base::sync_with_stdio(false); cin.tie(NULL);
#define UL unsigned long long

bool check = true;


void checkStr(string tong){
    check = true;
    for (ll  i = tong.size()-1; i >= 0; i--){
        if (tong[i] != tong[tong.size()-i-1]){
            check = false;
            break;
        } 

    }
}

string TongSring(string a){
    string tong = "";
    UL carry = 0;
    int tmp = 0;
    ll r = a.size() - 1;
    ll l = 0; 
    while(r >= 0 ){
        tmp = stoi(string(1,a[r])) + stoi(string(1,a[l])) + carry;
        tong = to_string(tmp%10) + tong;
        carry = (UL)tmp/10;
        --r; ++l;
    }
    return ((!carry)? "":to_string(carry)) + tong ;
}

int main(){
    string a ;
    ll n;
    UL m;
    
    cin >> a ;
    cin >> n >> m;
    ll n_copy = n;
    string res = TongSring(a); --n;
    // cout << res << endl;
    while(n> 1 &&  res.size() <= m){
        // cout << "___" << res<< endl;
        res = TongSring(res);
        checkStr(res);
        --n;
        if (check) break;
        
    }

    if (check ){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
    cout << n_copy - n << endl;
    cout << res << endl;
    
    return 0;
}