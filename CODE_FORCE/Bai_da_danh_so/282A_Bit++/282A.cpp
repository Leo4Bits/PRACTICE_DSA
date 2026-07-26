#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL);


int main(){
    int t, inc = 0, dec = 0;
    cin >> t;
    string tmp;

    while(t--){
        cin >> tmp;
        if (tmp[1] == '+') inc+=1;
        else dec -=1;
    }
    cout << inc + dec << endl;
    return 0;
}