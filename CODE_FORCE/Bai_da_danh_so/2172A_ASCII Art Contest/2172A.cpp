#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(NULL);

int main(){
    int tmp;
    int min = 100;
    int max = 80;
    int med = 0;
    int stop = 3;
    while(stop--){
        cin >> tmp;
        if (tmp < min) min = tmp;
        if (tmp > max) max = tmp;
        med += tmp;
    }
    
    if (max - min < 10) cout << "final " << med - (max + min);
    else cout << "check again" << endl;
    return 0;
}