#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL);

int main(){
    int t,tmp,res = 0;
    cin >> t;
    while(t--){
        int stop = 3;
        int sum = 0;
        while(stop--)
        {
            cin >> tmp;
            if(tmp) sum+=1;
        }
        if (sum>= 2) res+=1;
        
    }
    cout << res << endl;
    
    return 0;
}