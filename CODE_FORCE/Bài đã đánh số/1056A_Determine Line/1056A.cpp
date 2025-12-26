#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL);

map<int,int> cnt;
int main(){
    int t, stop;
    cin >> t;
    stop = t;
    while ((stop--))
    {
        int tram, tmp;
        cin >> tram;
        set<int> only;
        while(tram--){
            cin >> tmp;
            only.insert(tmp);
        }

        
        for(const auto& i: only){
            cnt[i]++;
        }
        
    }
    for(const auto& i: cnt){
            if (i.second == t) cout << i.first << " ";
        }
    
    return 0;
}