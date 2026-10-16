#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL);

int main(){
    int t;
    cin >> t;
    while(t--){
        int l;
        int is_fl = 0;
        int is_odd = 0;
        int is_even = 0;
        cin >> l;
        while (l--){
            int i;
            cin >> i;
            if (i  % 2 == 0){
                if ((i / 2) % 2 == 0){
                    is_even +=1;
                }else{
                    is_odd +=1;
                }
            }
            else{
                is_fl +=1 ;
            }
        }
        cout << max({is_fl,is_odd,is_even}) << endl;

    }
    return 0;
}