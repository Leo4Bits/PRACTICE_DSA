#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL);

int main(){
    int t;
    cin >> t;
    while(t--){
        unordered_map<int,int> inf;
        int len; cin >>len ;
        int arr[len] = {0};
        int ar1[len] = {0};
        int tmp;
        for (int i = 0; i < len; i++){
            cin >> arr[i];
            ar1[i] = arr[i];
            inf[arr[i]] = i;
        }
        // cout << arr[1] << endl;
        sort(ar1,ar1+len,std::greater<int>());
        int l = 0; int r = l-1;
        for(int i = 0; i < len; i++){
            if (arr[i] != ar1[i]){
                l = i;
                r = ar1[i];
                
                break;
            }
        }
        // cout << r << endl;
        for(int i = l, y = inf[r]; i<y; i++,y--){
            swap(arr[i],arr[y]);
        }
        // cout << arr[1] << endl;
        for(int i = 0; i < len; i++){
            cout<<arr[i]<<" ";
        }cout << endl;
    }
    return 0;
}