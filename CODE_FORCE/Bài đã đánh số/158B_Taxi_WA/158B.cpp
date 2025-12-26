#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL);

int main(){
    unsigned long t, res = 0, tmp, carry = 0;
    cin >> t;
    while(t--){
        cin >> tmp;
        res+= (unsigned long)(tmp + carry)/4;
        carry = (tmp+carry)%4;
    }
    cout << res + (carry >= 1) << endl;
    return 0;
}