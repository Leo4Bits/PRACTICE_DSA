#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL);
map<char,int> cnt1;
int main(){
    int t;
    cin >> t;
    while(t--){
        cnt1.clear();
        int l;
        cin >> l;
        string str1, str2;
        cin >> str1 >> str2;
        for(const auto& i: str1){
            ++cnt1[i];
        }
        
        for(const auto& i: str2){
            --cnt1[i];
        }
        bool ok = true;
        for(const auto& i: cnt1){
            if (i.second != 0){
                ok = false;
                break;
            }
        }
        cout << (ok? "YES":"NO") << endl;
    }
    return 0;
}