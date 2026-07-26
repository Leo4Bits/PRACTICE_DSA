#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL);
#define UI unsigned int



int main(){
    UI t;
    cin >> t;
    while(t--){
        int l, tmp, max_ = 0, res = 0;;
        map<UI,UI> cnt;
        cin >> l;
        while (l--)
        {
            cin >> tmp;
            cnt[tmp]++;
        }
        for(auto& i:cnt){
            max_ = i.second;
            for(auto& j:cnt){
                if ((j.second>= i.second) && (j.first != i.first)){
                    max_ += i.second;
                } 
            }
            if (max_ >= res) res = max_;
        }
        cout << res << endl;
    }
    return 0;
}