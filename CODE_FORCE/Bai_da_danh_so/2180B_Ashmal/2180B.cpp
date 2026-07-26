#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL);

int main(){
    int t;
    cin >> t;
    while(t--){
        int nums;
        cin >> nums;
        string cmp;
        cin >> cmp;
        string res = cmp;
        --nums;
        while(nums--){
            string tmp;
            cin >> tmp;
            if (( res+tmp) < ( tmp+res)){
                res = res+tmp;
            }else res = tmp+res;

        }
        cout << res << endl;
    }
    
    return 0;
}