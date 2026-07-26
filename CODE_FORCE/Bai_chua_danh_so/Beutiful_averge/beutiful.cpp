#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL);
int SUM(int l,int r, int a[11]){
    return a[r] - a[l-1];
}
int prefix[11] = {0};
int main(){
    int t;
    cin >> t;
    int l, tmp;

    while(t--){
        int maxTBC = 0;
        cin >> l;

        for(int i = 1; i <= l ; i++){
            cin >> tmp;
            if (tmp >= maxTBC) maxTBC = tmp;
            prefix[i] = tmp + prefix[i-1];
        }
        
        for (int i = 1; i <= l ; i++){
            for (int j = i+1; j <= l; j++){
                if (SUM(i,j,prefix)/(j-i+1) >= maxTBC) maxTBC = SUM(i,j,prefix)/(j-i+1);
            }
        }
        cout << maxTBC << endl;
    }
    return 0;
}
    
