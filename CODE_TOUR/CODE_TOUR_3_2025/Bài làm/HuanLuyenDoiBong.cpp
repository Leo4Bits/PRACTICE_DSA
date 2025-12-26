#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL);
#define UL unsigned long

vector<UL> potenial;
map<UL,UL> access;

int main(){
    UL n, k, a, b;
    int c;
    cin >> n >> c >> k;
    UL ans = 0;
    while(n--){
        cin >> a >> b;
        // max = a + b;
        potenial.push_back(a+b);
        access[a+b] = b;
    }
    sort(potenial.begin(),potenial.end(),greater<UL>());

    for(auto&i:potenial){
        UL tmp = i;
        while (tmp < k && c >= 1)
        {
            cout << c << " " <<tmp;
            tmp += access[i];
            c -= 1;
        }
        --c;
        cout << endl;
        ans += 1;
        if (c == 0) break;
    }


    cout << ans << endl;
    


}