#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(0) cin.tie(NULL);

int main(){
    int t;
    cin >> t;
    while(t--){
        int s;
        cin >> s;
        int arr[s] = {0};
        bool check = true;
        // i%2 == 0 -> red -> 1| blue -> 0s
        unordered_map<int,bool> umap;
        for(int i = 0; i < s; i++){
            cin >> arr[i];
            if (i % 2 == 0) umap[arr[i]] = true;
            else umap[arr[i]] = false;
        }
        for(int i = 2; i < s+1; i++){
            if (umap[i] == umap[i-1]){
                check = false;
                break;
            }
            // cout << umap[arr[i]] << " " << umap[arr[i-1]] << endl;
        }
        if (check) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}