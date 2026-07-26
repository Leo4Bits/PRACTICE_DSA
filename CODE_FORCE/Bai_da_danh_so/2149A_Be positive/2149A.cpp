#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL);

int main(){
    unsigned int t;
    cin >> t;
    while(t--){
        unsigned int len, res= 0, cnt_1 = 0, tmp;
        cin >> len;

        while (len--)
        {
            cin >> tmp;
            if (tmp ==0 ) res+=1;
            else if (tmp == -1) cnt_1+= 1;
        }
        cout << res + ((cnt_1%2==0)? 0:2) << endl;
        
    }
    return 0;
}