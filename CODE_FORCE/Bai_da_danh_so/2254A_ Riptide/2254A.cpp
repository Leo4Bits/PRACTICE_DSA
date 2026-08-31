#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a[3];
        int max = 0;
        int min = 10;
        int idxmax;
        int idxmin;
        int mid;
        set<int> s;
        for (int i = 0; i < 3; i++){
            cin >> a[i];
            s.insert(a[i]);
            if (a[i] > max){
                max = a[i];
                idxmax = i;
            } 
            if (a[i] < min ) {
                min = a[i];
                idxmin = i;
            }
        }
        if (s.size() != 3){
            cout << 0 << endl;
            continue;
        }
        for (int i = 0; i < 3; i++){
            
            if ((i == idxmax) || (i == idxmin)) continue;
            mid = a[i];
            
        }
        int difmaxmid = max - mid;


        
    }
    return 0;
}