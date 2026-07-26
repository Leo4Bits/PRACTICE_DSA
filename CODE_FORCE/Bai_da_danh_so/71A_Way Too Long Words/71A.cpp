#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL);

int main(){
    string n;
    
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if (n.size()>= 11) cout << n[0] << n.size()-2 << n[n.size()-1] << endl;
        else cout << n << endl;
    }
    return 0;
}